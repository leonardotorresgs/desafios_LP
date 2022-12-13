#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

double poli(double*, int, double);

int main(){	

	int grau;
	double x;
	
	scanf("%d", &grau);
	scanf("%lf", &x);
	
	double vet[grau+1];
	
	for (int i=0; i<=grau; i++){
		
		scanf("%lf", &vet[i]);
	}
	
	printf("%.2lf ", poli(vet,grau,x));
	
}
double poli(double* vet, int grau, double x){
	
	int i, g = grau;
	double y;

	for (i=0; i<=grau; i++){
		
		y+= (vet[i])*pow(x,g);
		g--;
	}
	return y;	
}
