#include <iostream>

using namespace std;

int main(){
	
	long int x0, y0, x1, y1, x, y, aux;
	
	cin >> x0 >> y0 >> x1 >> y1 >> x >> y;
	
	if (x0 > x1){
		aux = x0;
		x0 = x1;
		x1 = aux;
	}
	
	if (y0 > y1){
		aux = y0;
		y0 = y1;
		y1 = aux;
	}
	
	if (x >= x0 && x <= x1 && y >= y0 && y <= y1)
		cout << "INTERNO" << endl;
	else
		cout << "EXTERNO" << endl;
	
}
