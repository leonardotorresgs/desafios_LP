#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int pA, qA, pB, qB;
	float aux=0;
	
	cin >> pA >> qA;
	int matrizA[pA][qA];
	for(int i=0;i<pA;i++){
		for(int j=0;j<qA;j++){
			cin >> matrizA[i][j];
		}
	}

	cin >> pB >> qB;
	int matrizB[pB][qB];
	for(int i=0;i<pB;i++){
		for(int j=0;j<qB;j++){
			cin >> matrizB[i][j];
		}
	}
	
	int matrizC[pA][qB];
	
	for(int i=0;i<pA;i++){
		for(int j=0;j<qB;j++){
			matrizC[i][j] = 0;
			for(int x=0;x<pB;x++) {
				aux += matrizA[i][x] * matrizB[x][j];
			}
			matrizC[i][j] = aux;
			aux = 0;
		}
	}
	
	for(int i=0;i<pA;i++){
		for(int j=0;j<qB;j++) {
//			cout.width(5);
			cout << setiosflags(ios::left)
			     << matrizC[i][j] << "\t";
		}
		cout << "\n";
	}
}


