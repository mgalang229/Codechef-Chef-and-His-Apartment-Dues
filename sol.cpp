#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int pos=n, cnt=0, zero=0;
		for(int i=0; i<n; ++i) {
			int a;
			cin >> a;
			if(a==0) {
				if(cnt==0) {
					pos=i;
					cnt=1;
				}
				zero++;
			}
		}
		cout << zero*1000+(n-pos)*100 << "\n";
	}
}
