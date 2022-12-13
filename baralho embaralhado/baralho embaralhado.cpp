#include <iostream>
using namespace std;

int main()
{
    int p, a, b;
	
	cin >> p;
    while(p != EOF){
        a = 2;
        b = 1;

        while(a != 1){
            if(a <= p/2){
                a += a;
            }
            else{
                a -= (p - a + 1);
            }
            b++;
        }
        cout << b << endl;
    }
}

