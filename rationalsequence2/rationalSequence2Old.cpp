#include <stdio.h>

struct pair {
	int p;
	int q;
};

int main() {
	int n,l,r,c,j;
	struct pair heap[20000];
	heap[0]=(struct pair){1,1};
	for(int i=1; i<20000; i++){
		if(i%2 == 1)
			heap[i]=(struct pair){heap[(i-1)/2].p,heap[(i-1)/2].p+heap[(i-1)/2].q};
		else
			heap[i]=(struct pair){heap[(i-1)/2].p+heap[(i-1)/2].q,heap[(i-1)/2].q};
	//printf("Node: %2d\t{%d/%d}\n",i,heap[i].p,heap[i].q);
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf(" %d %d/%d",&c,&l,&r);
		j=0;
		while(l!=heap[j].p || r!=heap[j].q)
			j += 1;
		j += 1;
		printf("%d %d\n",c,j);
	}
	return 0;
}
