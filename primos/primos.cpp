#include <iostream>

using namespace std;

int main()
{
    int x, resultado=0, i;
    
    cin >> x;  
    for(i=1; i<=x; i++){
        if(x%i==0){
        resultado += 1;
        }
    }
    if (resultado==2)
        cout << "PRIMO" << endl;
    else
        cout << "!PRIMO" << endl;
        
    return 0;
}
