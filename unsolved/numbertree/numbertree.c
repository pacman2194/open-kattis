#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp % 2)
        return base * power(base, exp - 1);
    else {
        int temp = power(base, exp / 2);
        return temp * temp;
    }
}

int main() {
	int h;
	scanf("%d", &h);
	char path[h+2];
	gets(path);
	int i = 0;
	int start = power(2,h+1)-1;
	while(path[i] != 0) {
		if(path[i] == 'L'){

		} else if(path[i] == 'R'){

		} else {
			continue;
		}
	}
	printf("i: %d",i);

	return 0;
}
