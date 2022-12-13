#include<iostream>
using namespace std;

int conta(char c, char *s);

int conta(char c, char *s){

	int num_vezes=0;
	int i=0;
	
	while(*s!='\0'){
		if(*s==c){
			num_vezes++;
		}
		s++;
	}
	return num_vezes;
}

int main (){
	int n;
	char c;
	char *s;
	
	cin >> c;
	
	cin >> s;
	
	n = conta(c, s);
	
	cout << n;
}
