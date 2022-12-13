#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    long double e = 0, f = 1;

    cin >> n;

    for(int i=0; i<=n; i++){
        if(i>1){
            f*=i;
        }
        e += (1/f);
    }
    cout << fixed; cout.precision(16); cout << e << endl;
    return 0;
}
