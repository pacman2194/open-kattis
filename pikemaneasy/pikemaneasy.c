#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	long probs, mins, a, b, c, t, totalTime, penalty, solved;
	scanf("%ld %ld %ld %ld %ld %ld", &probs, &mins, &a, &b, &c, &t);
	long solveTime[probs];
	solveTime[0] = t;
	for(int i=1; i<probs; i++){
		solveTime[i] = (((a*solveTime[i-1])+b)%c)+1;
	}
	qsort(solveTime,probs,sizeof(long),compare);
	totalTime = 0;
	solved = 0;
	penalty = 0;
	for(int i=0; i<probs; i++){
		//printf("%ld\n",solveTime[i]);
		if(solveTime[i] + totalTime <= mins){
			totalTime += solveTime[i];
			penalty += totalTime;
			solved++;
		} else break;
	}
	printf("%ld %ld", solved, penalty%1000000007);
	return 0;
}