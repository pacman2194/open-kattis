#include <stdio.h>
#include <string.h>

int compare(char *x, char *y){
	if(((int) *x-'0') > ((int) *y-'0'))
		return 1;
	else if(((int) *x-'0') < ((int) *y-'0'))
		return -1;
	else
		return 0;
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
	char a[11],b[11];
	char zero = '0';
	char *z = &zero;
	memset(a,0,11*sizeof(char));
	memset(b,0,11*sizeof(char));
	scanf("%s %s",a,b);
	int u = 10;
	int w = 10;
	for(; a[u]==0; u--);
	for(; b[w]==0; w--);
	for(; u>=0 || w>=0; u--,w--){
		if(u<0){
			if(compare(z,b+w)==1)
				b[w]='y';
			// else if(compare(z,b+w)==-1)
			// 	a[u]='y';
		}else if(w<0){
			// if(compare(a+u,z)==1)
			// 	b[i]='y';
			if(compare(a+u,z)==-1)
				a[u]='y';
		}else{
			if(compare(a+u,b+w)==1)
				b[w]='y';
			else if(compare(a+u,b+w)==-1)
				a[u]='y';
		}
	}
	int k;
	int pos = 0;
	int resA = 0;
	int resB = 0;
	for(k=10; a[k]==0; k--);
	for(;k>=0;k--){
		if(a[k]!='y'){
			resA += (ipow(10,pos)*((int)(a[k]-'0')));
			pos++;
		}
	}
	pos = 0;
	for(k=10; a[k]==0; k--);
	for(;k>=0;k--){
		if(b[k]!='y'){
			resB += (ipow(10,pos)*((int)(b[k]-'0')));
			pos++;
		}
	}
	printf("%d\n%d\n",resA,resB);
	return 0;
}