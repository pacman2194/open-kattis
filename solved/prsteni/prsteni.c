#include <stdio.h>

int 
gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}

int main(){
	int n;
	scanf("%d",&n);
	int start,temp,g;
	scanf(" %d",&start);
	n--;
	while(n--){
		scanf(" %d",&temp);
		g = gcdr(start,temp);
		printf("%d/%d\n",start/g,temp/g);
	}
	return 0;
}