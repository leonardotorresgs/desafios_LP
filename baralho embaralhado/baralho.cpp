#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int p, n = 0, cont = 1, j, k = 0;
	
	cin >> p;
	int vet1[p], vet2[p/2], vet3[p/2], vet4[p];
	for (int i=0;i<p;i++){
		vet1[i] = cont;
		vet4[i] = cont;
		cont++;
	}
	do{
		j = 0;
		for(int i=0;i<p;i++){
			if (i<p/2){
				vet2[i] = vet4[i];	
			}
			else if (i>=p/2){
				vet3[j] = vet4[i];
				j++;
			}
		}	
		j = 0;
		k = 0;
		for(int i=0;i<p;i++){
			if(i%2==0){
				vet4[i] = vet3[j];
				j++;
			}
			else if(i%2!=0){
				vet4[i] = vet2[k];
				k++;
			} 
		}
		n++;
		if (memcmp(&vet1, &vet4, sizeof vet1) == 0){
			break;
		}
	}while(true);
	cout << n << endl;
}
