#include <stdio.h>

int main() {
	int n,m,temp,coins,knight;
	int heads[20000];
	int knights[20000];
	int success = 0;
	scanf("%d %d", &n, &m);
	while(n!=0 && m!=0) {
		if(n > m) {
			for(int i=0; i<n; i++)
				scanf(" %d",heads+i);
			for(int i=0; i<m; i++)
				scanf(" %d",knights+i);
			puts("Loowater is doomed!\n");
		}
		else {
			knight=0;
			coins=0;
			success = 0;
			for(int i=0; i<n; i++) //get heads
				scanf(" %d",heads+i);
			for(int i=0; i<m; i++) //get knights
				scanf(" %d",knights+i);
			for(int i=0; i<n; i++) { //sort heads
				for(int j=0; j<n; j++) {
					if(heads[j] > heads[i]) {
						temp = heads[i];
						heads[i] = heads[j];
						heads[j] = temp;
					}
				}
			}
			for(int i=0; i<m; i++) { //sort knights
				for(int j=0; j<m; j++) {
					if(knights[j] > knights[i]) {
						temp = knights[i];
						knights[i] = knights[j];
						knights[j] = temp;
					}
				}
			}
			//start solution
			for(int i=0; i<n && knight<m; i++) {
				if(knights[knight] < heads[i]){
					knight++;
					i--;
					continue;
				}else if(i < (n-1) && knights[knight] >= heads[i]){
					coins += knights[knight];
					knight++;
					continue;
				}else if(i == (n-1) && knights[knight] >= heads[i]){
					coins += knights[knight];
					success = 1;
					break;
				}
			}
			if(success == 1)
				printf("%d\n", coins);
			else
				printf("Loowater is doomed!\n");
		}
		scanf(" %d %d", &n, &m);
	}

	return 0;
}
