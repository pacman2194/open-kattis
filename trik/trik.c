#include <stdio.h>

int main() {
	int n[3]={1,0,0};
	int temp;
	char moves[51];
	scanf("%s", moves);
	for(int i=0; moves[i]!=0; i++) {
		if(moves[i] == 'A') {
			temp = n[1];
			n[1] = n[0];
			n[0] = temp;
		} else if(moves[i] == 'B') {
			temp = n[1];
			n[1] = n[2];
			n[2] = temp;
		} else if(moves[i] == 'C') {
			temp = n[2];
			n[2] = n[0];
			n[0] = temp;
		}
	}
	for(int i=0; i<3; i++) {
		if(n[i] == 1)
			printf("%d",i+1);
	}
}
