#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c);

int main(){
	int n;
	cin >> n;
	
	hanoi(n, 'A', 'B', 'C');
}

void hanoi(int n, char a, char b, char c){
	
	if (n==1){
		cout << "Mover disco " << n << " do pino " << a << " para pino " << b << endl;
	}
	else {
		hanoi(n-1, a, c, b);
		cout << "Mover disco " << n << " do pino " << a << " para pino " << b << endl;
		hanoi(n-1, c, b, a);
	}
}
