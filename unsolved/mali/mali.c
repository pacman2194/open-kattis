#include <stdio.h>

int main(){
	int n, currMax;
	currMax=0;
	scanf("%d", &n);
	int a,al,au,b,bl,bu;
	for(int i=0; i<n; i++){
		scanf(" %d %d", &a, &b);
		if(i>0){
			if(a<al){
				al = a;
				if(b<bl){
					bl = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else if(b>bu){
					bu = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else{
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}
			}else if(a>au){
				au = a;
				if(b<bl){
					bl = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else if(b>bu){
					bu = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else{
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}
			}else{
				if(b<bl){
					bl = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else if(b>bu){
					bu = b;
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}else{
					if(al+bu > currMax)
						currMax = al+bu;
					if(au+bl > currMax)
						currMax = au+bl;
				}
			}
		}else{
			currMax = a+b;
			al = a;
			bl = b;
			au = a;
			bu = b;
		}
		printf("%d\n",currMax);
		currMax = 0;
	}
	return 0;
}
