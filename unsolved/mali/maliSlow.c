#include <stdio.h>
#include <stdlib.h>

int asc (const void * a, const void * b){
	if ( *(int*)a <  *(int*)b ) return -1;
	if ( *(int*)a == *(int*)b ) return 0;
	if ( *(int*)a >  *(int*)b ) return 1;
}
int des (const void * a, const void * b){
	if ( *(int*)a <  *(int*)b ) return 1;
	if ( *(int*)a == *(int*)b ) return 0;
	if ( *(int*)a >  *(int*)b ) return -1;
}

int main(){
	int n,max,minMax;
	scanf("%d", &n);
	int a[n];
	int b[n];
	for(int i=0; i<n; i++){
		scanf(" %d %d", a+i, b+i);
		max = 0;
		if(i>0){
			qsort(a, i+1, sizeof(int), asc);
			qsort(b, i+1, sizeof(int), des);
			for(int j=0; j<=i; j++){
				if(a[j]+b[j]>max)
					max = a[j]+b[j];
				else
					continue;
			}
			minMax = max;
		}else{
			max = a[0]+b[0];
			minMax = max;
		}
		printf("%d\n",max);
	}
	return 0;
}
