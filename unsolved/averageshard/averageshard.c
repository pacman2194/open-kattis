#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	long cases,cs,e,csAv,eAv,csT,eT,funny;
	long *csSt, *eSt;
	scanf("%ld",&cases);
	while(cases--)
	{
		csAv = 0;
		eAv = 0;
		csT = 0;
		eT = 0;
		funny = 0;
		scanf(" %ld %ld",&cs,&e);
		csSt = malloc(cs * sizeof(long));
		eSt = malloc(e * sizeof(long));
		for(int i=0; i<cs; i++){
			scanf(" %ld", csSt+i);
			csT += csSt[i];
		}
		for(int i=0; i<e; i++){
			scanf(" %ld", eSt+i);
			eT += eSt[i];
		}
		qsort(csSt,cs,sizeof(long),compare);
		csAv=csT/cs;
		eAv=eT/e;
		printf("CS Av: %ld\tE Av: %ld\n",csAv,eAv);
		for(int i=0; i<cs; i++){
			if(csSt[i] < csAv && csSt[i] > eAv){
				funny++;
				cs--;
				csT -= csSt[i];
				csAv=csT/cs;
				e++;
				eT += csSt[i];
				eAv=eT/e;
			}
		}
		printf("CS Av: %ld\tE Av: %ld\n",csAv,eAv);
		printf("%ld\n",funny);
	}

	return 0;
}