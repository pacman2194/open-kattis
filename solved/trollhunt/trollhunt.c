#include <stdio.h>

int main(){
	int b,k,g,groups;
	scanf("%d %d %d",&b,&k,&g);
	groups = k/g;
	b--;
	if(b%groups==0)
		printf("%d",b/groups);
	else
		printf("%d",b/groups+1);
	return 0;
}
