#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int t, seq = 0, test, rep = 0;
	char c[16], d[16], z[16], sub[16], sub2[16][16] = {0};
	
	cin >> c;
	cin >> d;
	cin >> z;
	cin >> t;
	
	test = strlen(c);
	
	for (int i = 0; i <= test - t; i++) {
        strncpy(sub, c + i, t);
        sub[t] = '\0';
        
        if (strstr(d, sub) && strstr(z, sub)) {
            for (int i = 0; i < seq; i++) {
                if (strcmp(sub2[i], sub) == 0) {
                    rep = 1;
                    break;
                }
            }

            if (!rep) {
                strcpy(sub2[seq], sub);
                seq++;
            }
        }
    }
    cout << seq << endl;
}
