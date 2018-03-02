#include <stdio.h>

int main(){
	int n,maxL;
	short driving=1;
	long time,cost,min,maxT,walkLen;
	time=0;
	cost=0;
	scanf("%d",&n);
	long path[n-1];
	long gates[n];
	min = path[0];
	maxT = 0;
	maxL = 0;
	for(int i=0; i<n-1; i++)
		scanf(" %d",path+i);
	for(int i=0; i<n; i++){
		scanf(" %d",gates+i);
		if(gates[i]>maxT){
			maxT = gates[i];
			maxL = i;
		}
	}
	walkLen = maxT + ((int)(n-maxL));
	while(driving){

	}
	return 0;
}
