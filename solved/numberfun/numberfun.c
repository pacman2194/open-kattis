#include <stdio.h>

int main() {
	int n,a,b,c;
	scanf("%d", &n);

	for(int i=0; i<n; i++) {
		scanf(" %d %d %d", &a, &b, &c);
		if(a+b == c || a-b == c || b-a == c || a*b == c || ((a/b == c) && (a%b == 0)) || ((b/a == c) && (b%a == 0))) {
			char string [] = "Possible";
			puts(string);
		}
		else {
			char string [] = "Impossible";
			puts(string);
		}
	}

	return 0;
}
