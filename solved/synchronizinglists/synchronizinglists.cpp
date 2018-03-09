#include <cstdio>
#include <algorithm>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	while(n != 0){
		int a[n];
		int ac[n];
		int b[n];
		for(int i=0; i<n; i++){
			scanf(" %d", &a[i]);
			ac[i]=a[i];
		}
		for(int i=0; i<n; i++){
			scanf(" %d", &b[i]);
		}
		std::sort(ac, ac + n);
		std::sort(b, b+n);
		for(int i=0; i<n; i++){
			int j;
			for(j=0; a[i] != ac[j]; j++){}
			printf("%d\n",b[j]);
		}
		printf("\n");
		scanf(" %d", &n);
	}
	return 0;
}
