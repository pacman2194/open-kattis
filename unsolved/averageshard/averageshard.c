#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int cases, funny;
	unsigned long long cs,e,csT,eT;
	unsigned long long *csSt, *eSt;
	scanf("%d",&cases);
	while(cases--)
	{
		csT = 0;
		eT = 0;
		funny = 0;
		scanf(" %lld %lld",&cs,&e);
		csSt = malloc(cs * sizeof(long));
		eSt = malloc(e * sizeof(long));
		for(int i=0; i<cs; i++){
			scanf(" %lld", csSt+i);
			csT += csSt[i];
		}
		qsort(csSt,cs,sizeof(long),compare);
		if(e > 0){
			for(int i=0; i<e; i++){
				scanf(" %lld", eSt+i);
				eT += eSt[i];
			}
			for(int i=0; i<cs; i++){
				if(((long double)(csSt[i])) < ((long double)(csT/cs)) && ((long double)(csSt[i])) > ((long double)(eT/e))){
					funny++;
					cs--;
					csT -= csSt[i];
					e++;
					eT += csSt[i];
				}
			}
		}else{
			for(int i=0; i<cs; i++){
				if(((long double)(csSt[i])) < ((long double)(csT/cs))){
					funny++;
					cs--;
					csT -= csSt[i];
					e++;
					eT += csSt[i];
				}
			}
		}
		printf("%d\n",funny);
	}

	return 0;
}