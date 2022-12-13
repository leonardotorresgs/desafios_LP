#include <iostream>
#include<iomanip>

using namespace std;
int main() {

    int h,n;
    float div;

    cin >> h;

    for(n=1;n<=h;n++){
        div = div + 1.0/n;
    }
    cout << fixed << setprecision(8);
    cout << div;
}
