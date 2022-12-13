#include <iostream>
using namespace std;

int main(){
	int t, n, m, alf[25];
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		cin >> n >> m;
		char s[n];
		int vet[m+1];
		cin >> s;
		
		for(int j=0;j<m;j++){
			cin >> vet[j];
		}
		vet[m] = n;
		for(int j=0;j<26;j++){
			alf[j] = 0;
		}
		for(int j=0;j<m+1;j++){
			for(int k=0;k<vet[j];k++){
				switch(s[k]){
					case 'a':
						alf[0]++;
						break;
					case 'b':
						alf[1]++;
						break;
					case 'c':
						alf[2]++;
						break;
					case 'd':
						alf[3]++;
						break;
					case 'e':
						alf[4]++;
						break;
					case 'f':
						alf[5]++;
						break;
					case 'g':
						alf[6]++;
						break;
					case 'h':
						alf[7]++;
						break;
					case 'i':
						alf[8]++;
						break;
					case 'j':
						alf[9]++;
						break;
					case 'k':
						alf[10]++;
						break;
					case 'l':
						alf[11]++;
						break;
					case 'm':
						alf[12]++;
						break;
					case 'n':
						alf[13]++;
						break;
					case 'o':
						alf[14]++;
						break;
					case 'p':
						alf[15]++;
						break;
					case 'q':
						alf[16]++;
						break;
					case 'r':
						alf[17]++;
						break;
					case 's':
						alf[18]++;
						break;
					case 't':
						alf[19]++;
						break;
					case 'u':
						alf[20]++;
						break;
					case 'v':
						alf[21]++;
						break;
					case 'w':
						alf[22]++;
						break;
					case 'x':
						alf[23]++;
						break;
					case 'y':
						alf[24]++;
						break;
					case 'z':	
						alf[25]++;
						break;
				}	
			}
		}

		for(int j=0;j<26;j++){
			cout << alf[j] << " ";
		}
		cout << '\n';
	}
}
