#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double timeWidth = 60.0 * M_PI / 28.0 / 15.0;
	double totalTime;

	scanf("%d ", &n);
	char aph[121];
	int len,f,t,l,r;
	for(int i=0; i<n; i++){
		totalTime = 0;
		fgets(aph,121,stdin);
		//puts(aph);
		for(int j=0; aph[j]!=0; j++)
			totalTime += 1;
		len = totalTime;
		if(aph[0] == ' ')
			f = 26;
		if(aph[0] == '\'')
			f = 27;
		else
			f = aph[0] - 'A';

		for(int j=1; j<len-1; j++){
			if(aph[j] == ' ')
				t = 26;
			else if(aph[j] == '\'')
				t = 27;
			else
				t = aph[j] - 'A';
			
			if(f > t) {
				l = ((double)(f - t)) * timeWidth;
				r = ((double)(28 - f + t)) * timeWidth;
			}
			else if(f < t) {
				l = ((double)(28 - t + f)) * timeWidth;
				r = ((double)(t - f)) * timeWidth;
			}
			else {
				l = 0.0;
				r = 28.0;
			}
			if(l <= r)
				totalTime += l;
			else
				totalTime += r;
			f = t;
		}
		printf("%0.6f\n",totalTime);
	}
}
