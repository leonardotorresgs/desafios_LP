#include <iostream>
using namespace std;

int main(){
	int t, n, rs = 0, ls = 0;
	
	cin >> t;
	cin >> n;
	
	int lf[n][8];

	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			cin >> lf[i][j];
		}
	}

	for(int i=0;i<n;i++){
		if ((lf[i][7] < t) && (lf[i][6] < t) && (lf[i][5] < t)){
			cout << "RIGTH SIDE!\n";
			rs++;					
		}
		else if ((lf[i][2] < t) && (lf[i][1] < t) && (lf[i][0] < t)){
			cout << "LEFT SIDE!\n";
			ls++;
		}
		else cout << "NO PERFORM!!!\n";
	}
	
	if ((rs>0) || (ls>0)){
		if (ls >= rs)
			cout << "RIGHT SIDE!!! THE STRONG SIDE!!!\n";
		else
			cout << "LEFT SIDE!!! THE STRONG SIDE!!!\n";
	}
	else
		cout << "WEAK SIDE!!! BOTH SIDE!!!\n";
}

