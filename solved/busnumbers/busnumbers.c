#include <stdio.h>

int main() {
	int n, streak, start, dummy;
	streak = 0;
	start = 0;
	int stops[1002];
	scanf("%d", &n);
	for(int i=0; i<1002; i++){
		stops[i]=0;
	}
	for(int i=0; i<n; i++){
		scanf(" %d", &dummy);
		stops[dummy] = dummy;
	}
	for(int i=1; i<=1001; i++){
		if(stops[i]!=0 && streak == 0){
			streak++;
			start = i;
		}
		else if(stops[i]!=0)
			streak++;
		else if(streak == 1 && stops[i]==0){
			streak = 0;
			printf("%d ", start);
		}
		else if(streak == 2 && stops[i]==0){
			streak = 0;
			printf("%d %d ", start, start+1);
		}
		else if(streak >= 3 && stops[i]==0){
			printf("%d-%d ",start,start+streak-1);
			streak = 0;
		}
		//else
			//printf("fjuck");
	}
}
