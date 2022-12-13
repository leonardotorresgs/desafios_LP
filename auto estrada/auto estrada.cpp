#include <iostream>
using namespace std;

int main(){
	int n, soma=0;
	char c[1000000];
	
	cin >> n;
	cin >> c;
	
	for(int i=0; i<n; i++){
		if ((c[i] == 'P') || (c[i] == 'C')){
			soma = soma + 2;
		}
		else if(c[i] == 'A'){
			soma = soma + 1;
		}
	}
	
	cout << soma << endl;
}

