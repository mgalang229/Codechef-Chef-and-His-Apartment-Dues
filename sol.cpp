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
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int pos=n, flag=0, z=0;
		for(int i=0; i<n; ++i) {
			if(a[i]==0) {
				if(flag==0) {
					pos=i;
					flag=1;
				}
				z++;
			}
		}
		cout << (z*1000)+(n-pos)*100 << "\n";
	}
}
