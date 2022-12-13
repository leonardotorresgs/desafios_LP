#include <iostream>
#include <string.h>
using namespace std;
#define N 5005

int main(){
	char s[N], s_ans[N], temp[N];
	int ans_int;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin >> s;
			
		ans_int = 1;
		strcpy(s_ans, s);
		int k, i, j1, j2;
		char c;
		for(k = 2; k <= n; k++){
			
			strcpy(temp, s);
			for(i=0;i<=n-k;i++){
				j1 = i;
				j2 = i+k-1;
				while(j1<j2){
					c = temp[j1];
					temp[j1] = temp[j2];
					temp[j2] = c;
					j1++;	
					j2--;
				}
			}
			if(strcmp(temp, s_ans) < 0){
				strcpy(s_ans, temp);
				ans_int = k;
			}
		}
		cout << s_ans << endl;
		cout << ans_int << endl;
//		printf("%s\n%d\n", s_ans, ans_int);
	}
	return 0;
}

