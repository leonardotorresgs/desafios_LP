#include <iostream>
using namespace std;


int main(){
	int fibonacci(int n);
	int n;
	
	while(true){
		cin >> n;
		if(n<=10000){
			n = fibonacci(n);
			cout << n << endl;
		}
		else{
			break;
		}
	}
}

int fibonacci(int n){
	int num, n1=1, n2=1;
	
	if(n>2){
		for(int i=0;i<n-2;i++){
			num = n1 + n2;
			n1 = n2;
			n2 = num;
		}	
	}
	else
		num = 1;
	
	return num;
}
