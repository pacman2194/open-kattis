#include <stdio.h>

int main() {
	int r,c,deg;
	scanf("%d %d", &r, &c);
	char txt[101];
	char ans[362];
	char line[c+1];
	for(int i=0; i<r; i++) {
		scanf(" %s", line);
		for(int j=0; j<c; j++)
			txt[(i*c)+j] = line[j];
	}
	scanf(" %d", &deg);
	if(deg == 0 || deg == 360) {
		for(int i=0; i<r*c; i++) {
			if(i%c==0 && i>0)
				putchar('\n');
			putchar(txt[i]);
		}
	}
	else if(deg == 180) {
		for(int i=r*c-1; i>=0; i--) {
			putchar(txt[i]);
			if(i%c==0 && i!=0)
				putchar('\n');
			}
	}
	else if(deg == 90) {
		for(int i=0; i<c; i++) {
			for(int j=r-1; j>=0; j--)
				putchar(txt[j*c+i]);
			if(i!=(c-1))
				putchar('\n');
		}
	}
	else if(deg == 270) {
		for(int i=c-1; i>=0; i--) {
			for(int j=0; j<r; j++)
				putchar(txt[j*c+i]);
			if(i!=0)
				putchar('\n');
		}
	}
	else if(deg == 45) {
		for(int i=0; i<362; i++) 
			ans[i]=' ';

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				ans[((r-1)+(i*(r+c-2)))+(j*(r+c))] = txt[(i*c)+j];
		}
		/*for(int i=0; i<((r+c-1)*(r+c-1)); i++) {
			if(i%(r+c-1) == 0 && i>0)
				putchar('\n');
			putchar(ans[i]);
		}*/
		char aLine[r+c+1];
		for(int i=0; i<(r+c-1); i++) {
			for(int j=0; j<(r+c-1); j++) {
				aLine[j]=ans[(i*(r+c-1))+j];
			}
			aLine[r+c]=' ';
			for(int j=(r+c); j>=0; j--) {
				if(aLine[j-1]!=' ' && aLine[j-1]!='\000' && aLine[j-1]!='\n') {
					aLine[j]='\n';
					break;
				}
			}
			for(int j=0; j<(r+c+1); j++) {
				if(aLine[j]!='\n')
					putchar(aLine[j]);
				else {
					//possible fix
					if(i!=(r+c-2)) {
						putchar(aLine[j]);
						break;
					}
					else
						break;
				}
			}
		}
	}
	else if(deg == 135) {
		for(int i=0; i<362; i++)
			ans[i]=' ';

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				ans[((c-1)+(i*(r+c)))+(j*(r+c-2))] = txt[(((r-1)-i)*c)+j];
		}
		/*for(int i=0; i<((r+c-1)*(r+c-1)); i++) {
			if(i%(r+c-1) == 0 && i>0)
				putchar('\n');
			putchar(ans[i]);
		}*/
		char aLine[r+c+1];
		for(int i=0; i<(r+c-1); i++) {
			for(int j=0; j<(r+c-1); j++) {
				aLine[j]=ans[(i*(r+c-1))+j];
			}
			aLine[r+c]=' ';
			for(int j=(r+c); j>=0; j--) {
				if(aLine[j-1]!=' ' && aLine[j-1]!='\000' && aLine[j-1]!='\n') {
					aLine[j]='\n';
					break;
				}
			}
			for(int j=0; j<(r+c+1); j++) {
				if(aLine[j]!='\n')
					putchar(aLine[j]);
				else {
					if(i!=(r+c-2)) {
						putchar(aLine[j]);
						break;
					}
					else
						break;
				}
			}
		}
	}
	else if(deg == 225) {
		for(int i=0; i<362; i++)
			ans[i]=' ';

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				ans[((r-1)+(i*(r+c-2)))+(j*(r+c))] = txt[((r-i-1)*c)+((c-1)-j)];
		}
		/*for(int i=0; i<((r+c-1)*(r+c-1)); i++) {
			if(i%(r+c-1) == 0 && i>0)
				putchar('\n');
			putchar(ans[i]);
		}*/
		char aLine[r+c+1];
		for(int i=0; i<(r+c-1); i++) {
			for(int j=0; j<(r+c-1); j++) {
				aLine[j]=ans[(i*(r+c-1))+j];
			}
			aLine[r+c]=' ';
			for(int j=(r+c); j>=0; j--) {
				if(aLine[j-1]!=' ' && aLine[j-1]!='\000' && aLine[j-1]!='\n') {
					aLine[j]='\n';
					break;
				}
			}
			for(int j=0; j<(r+c+1); j++) {
				if(aLine[j]!='\n')
					putchar(aLine[j]);
				else {
					if(i!=(r+c-2)) {
						putchar(aLine[j]);
						break;
					}
					else
						break;
				}
			}
		}
	}
	else if(deg == 315) {
		for(int i=0; i<362; i++)
			ans[i]=' ';

		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++)
				ans[((c-1)+(i*(r+c)))+(j*(r+c-2))] = txt[(i*c)+((c-1)-j)];
		}
		/*for(int i=0; i<((r+c-1)*(r+c-1)); i++) {
			if(i%(r+c-1) == 0 && i>0)
				putchar('\n');
			putchar(ans[i]);
		}*/
		char aLine[r+c+1];
		for(int i=0; i<(r+c-1); i++) {
			for(int j=0; j<(r+c-1); j++) {
				aLine[j]=ans[(i*(r+c-1))+j];
			}
			aLine[r+c]=' ';
			for(int j=(r+c); j>=0; j--) {
				if(aLine[j-1]!=' ' && aLine[j-1]!='\000' && aLine[j-1]!='\n') {
					aLine[j]='\n';
					break;
				}
			}
			for(int j=0; j<(r+c+1); j++) {
				if(aLine[j]!='\n')
					putchar(aLine[j]);
				else {
					if(i!=(r+c-2)) {
						putchar(aLine[j]);
						break;
					}
					else
						break;
				}
			}
		}
	}
}
