#include <stdio.h>

long gcd(long a, long b)
{
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;
	if(b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	int cases;
	long n1,d1,n2,d2,g,l,numerator,denominator;
	char operator;
	scanf("%d",&cases);
	while(cases--){
		scanf(" %ld %ld %c %ld %ld",&n1,&d1,&operator,&n2,&d2);
		//do negative checking here???
		if(d1 < 0){
			n1 *= -1;
			d1 *= -1;
		}
		if(d2 < 0){
			n2 = -n2;
			d2 = -d2;
		}
		g = gcd(n1,d1);
		n1 /= g;
		d1 /= g;
		g = gcd(n2,d2);
		n2 /= g;
		d2 /= g;
		if(operator=='+'){
			numerator = n1*d2+d1*n2;
			denominator = d1*d2;
			if(denominator < 0){
				denominator *= -1;
				numerator *= -1;
			}
			g = gcd(numerator,denominator);
			numerator /= g;
			denominator /= g;
			printf("%ld / %ld\n",numerator,denominator);
		} else if(operator=='-'){
			numerator = n1*d2-d1*n2;
			denominator = d1*d2;
			if(denominator < 0){
				denominator *= -1;
				numerator *= -1;
			}
			g = gcd(numerator,denominator);
			numerator /= g;
			denominator /= g;
			printf("%ld / %ld\n",numerator,denominator);
		} else if(operator=='*'){
			numerator = n1*n2;
			denominator = d1*d2;
			if(denominator < 0){
				denominator *= -1;
				numerator *= -1;
			}
			g = gcd(numerator,denominator);
			numerator /= g;
			denominator /= g;
			printf("%ld / %ld\n",numerator,denominator);
		} else if(operator=='/'){
			numerator = n1*d2;
			denominator = d1*n2;
			if(denominator < 0){
				denominator *= -1;
				numerator *= -1;
			}
			g = gcd(numerator,denominator);
			numerator /= g;
			denominator /= g;
			printf("%ld / %ld\n",numerator,denominator);
		} else
			puts("shit");
	}
}