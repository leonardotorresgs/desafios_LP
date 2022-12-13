#include <iostream>
using namespace std;
int main() {

    int x,m;

    cin >> x;
    cin >> m;
  if(m>=1 && m<=100000) {

      if((x+(x%m)) % m == 0){
          cout << "STOP";
      } else {
          cout << "NONSTOP";
      }
      return 0;
  }
}

