#include <stdio.h>

int main() {
	int n;
	double pr[501];
	double attempts=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf(" %*s %lf",pr+i);
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(pr[i] < pr[j]){
				pr[500]=pr[i];
				pr[i]=pr[j];
				pr[j]=pr[500];
			}
		}
	}
	for(int i=0; i<n; i++){
		//printf("%f\n",pr[i]);
		attempts += (double) (i+1) * pr[i];
	}
	printf("%.4f", attempts);
	return 0;
}
