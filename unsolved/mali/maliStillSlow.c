#include <stdio.h>

int main(){
	int n, temp, currMax;
	int minMax = 200;
	scanf("%d", &n);
	int a[n];
	int b[n];
	for(int i=0; i<n; i++){
		currMax = 0;
		scanf(" %d %d", a+i, b+i);
		if(i>0){
			for(int j=i-1; a[j+1]<a[j] && j>=0; j--){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
			for(int j=i-1; b[j+1]>b[j] && j>=0; j--){
				temp = b[j+1];
				b[j+1] = b[j];
				b[j] = temp;
			}
			if(a[i]+b[i] > currMax)
				currMax = a[i]+b[i];
			if(a[0]+b[0] > currMax)
				currMax = a[0]+b[0];
			if(a[i/2+1]+b[i/2+1] > currMax)
				currMax = a[i/2+1]+b[i/2+1];
			//if(currMax < minMax)
			//	minMax = currMax;
		}else{
			//minMax=a[0]+b[0];
			currMax=a[0]+b[0];
		}
		//printf("%d\n",minMax);
		printf("%d\n",currMax);
	}
	return 0;
}
