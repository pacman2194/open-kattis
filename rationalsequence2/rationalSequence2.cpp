#include <stdio.h>

struct pair {
	int p;
	int q;
};

int recursiveSearch(struct pair spot){
	if(spot.p != spot.q){
		if(spot.p > spot.q)
			return (recursiveSearch((struct pair){spot.p-spot.q,spot.q}) * 2)+1;
		else
			return (recursiveSearch((struct pair){spot.p,spot.q-spot.p}) * 2);
	}
	else
		return 1;
}

int main() {
	int n,l,r,c;
	struct pair heap[34];
	heap[1]=(struct pair){1,1};
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf(" %d %d/%d",&c,&l,&r);
		int pos;
		struct pair start =(struct pair){l,r};
		struct pair curr =(struct pair){l,r};
		pos = recursiveSearch(curr);
		printf("%d %d\n",c,pos);
	}
	return 0;
}
