#include <stdio.h>
#include <string.h>

int parseBinary(char *a, char *b, char *c){
	return ((int)*a-'0')*4+((int)*b-'0')*2+((int)*c-'0')*1;
}

int ipow(int base, int exp){
    int result = 1;
    while (exp){
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

int main(){
	int result = 0;
	int pos = 0;
	char bin[100];
	memset(bin, 0, 100*sizeof(char));
	scanf("%s",bin);
	char zero = '0';
	char *z = &zero;
	int i;
	for(i=99; i>0 && bin[i]==0; i--);
	while(i-2 >=0){
		result += (ipow(10,pos)*parseBinary(bin+i-2,bin+i-1,bin+i));
		pos++;
		i -= 3;
	}
	switch(i){
		case -1 :
			break;
		case 0 :
			result += (ipow(10,pos)*parseBinary(z,z,bin+i));
			break;
		case 1 :
			result += (ipow(10,pos)*parseBinary(z,bin+i-1,bin+i));
			break;
	}
	printf("%d\n", result);
	return 0;
}