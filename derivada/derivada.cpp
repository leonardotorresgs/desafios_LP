#include <iostream>
using namespace std;

int main(){
	double derivada(double *vet, int grau);
	int g;
	
	cin >> g;
	
	double p1[g+1];
	for(int i=0;i<=g;i++){
		cin >> p1[i];
	}
	
	derivada(p1, g);
	
	for(int i=0;i<g;i++){
		cout << p1[i];
		if(i<g-2){
			cout << "x^" << g-(i+1) << "+";
		}
		else if(i==g-2){
			cout <<"x+";
		}
	}
}

double derivada(double *vet, int grau){
	
	for(int i=0;i<grau;i++){
		vet[i] *= (grau - i);
	}
	
	return *vet;
}
