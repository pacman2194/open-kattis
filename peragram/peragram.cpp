#include <cstdio>

int main() {
	int c[26];
	int count=0;
	for(int i=0; i<26; i++) {
		c[i]=0;
	}

	char str[1001];
	scanf("%s",str);
	for(int i=0; str[i] != 0; i++) {
		c[str[i] - 'a'] += 1;
	}

	for(int i=0; i<26; i++) {
		//printf("Letter: %2d\tCount: %2d\n",i,c[i]);
		if(c[i]%2==1)
			count += 1;
	}
	if(count <= 1)
		count = 0;
	if(count > 1)
		count -= 1;
	printf("%d",count);
}
