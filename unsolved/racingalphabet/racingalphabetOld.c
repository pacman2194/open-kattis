#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int n;
	string cases;
	double PI = 3.1415926535898;
	double circ = 60.0 * PI;
	double width = circ / 28.0;
	double timeWidth = width / 15.0;
	double totalTime;
	
	/*
	char al[28];
	al[0]='A';
	al[1]='B';
	al[2]='C';
	al[3]='D';
	al[4]='E';
	al[5]='F';
	al[6]='G';
	al[7]='H';
	al[8]='I';
	al[9]='J';
	al[10]='K';
	al[11]='L';
	al[12]='M';
	al[13]='N';
	al[14]='O';
	al[15]='P';
	al[16]='Q';
	al[17]='R';
	al[18]='S';
	al[19]='T';
	al[20]='U';
	al[21]='V';
	al[22]='W';
	al[23]='X';
	al[24]='Y';
	al[25]='Z';
	al[26]=' ';
	al[27]=''';
	*/

	//cin >> n;
	getline(cin,cases);
	stringstream(cases) >> n;
	string aph;
	int f;
	int t;
	double l;
	double r;
	for(int i=0; i<n; i++){
		getline(cin,aph);
		//cin >> aph;
		totalTime = aph.length();
		
		if(aph[0] == ' ')
			f = 26;
		else if(aph[0] == '\'')
			f = 27;
		else
			f = 'A' - aph[0];

		for(int j=1; j<aph.length()-1; j++){
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
			if(l < r)
				totalTime += l;
			else
				totalTime += r;
			f = t;
		}
		printf("%0.6f\n",totalTime);
	}
}
