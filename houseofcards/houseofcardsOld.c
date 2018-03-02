#include <stdio.h>

int main() {
	unsigned int init, height, cards;
	height = 1;
	cards = 2;
	scanf("%d", &init);

	if(init < 5)
		putchar('5');
	else {
		while(height < init || cards%4 != 0) {
			if(cards%4==0)
				printf("height: %2d\tcards: %d\n",height,cards);
			height += 1;
			cards += ((height-1)*2)+1+height;
		}
		printf("%d", height);
	}

	return 0;
}
