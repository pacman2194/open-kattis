#include <stdio.h>
#include <string.h>

int main() {
	char line[81];
	memset(line,0,81*sizeof(char));
	int len = 1000;
	int count, buff = {0};
	while(gets(line)){
		count = 0;
		if(strlen(line)!=len){
			if(line[0] == '\n'){
				putchar('\n');
				continue;
			}
			buff = 0;
			len = strlen(line);
		}
		for(int i=0; i<len; i++){
			if(line[i]=='*')
				count++;
		}
		memset(line,'.',len*sizeof(char));
		if(len-count-buff >= 0 && count+buff <= len)
			memset(line+len-count-buff,'*',count*sizeof(char));
		puts(line);
		memset(line,0,81*sizeof(char));
		buff+=count;
	}
}