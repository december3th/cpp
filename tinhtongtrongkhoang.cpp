#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k;
	while (k--) {
		long long n ;
		int m ;
		cin >> n >> m;
		long int a[n];
		for ( int i = 0 ; i < n ; i ++) cin >> a[i];
		while (m--) {
			int l , r;
			cin >> l >> r;
			long long sum = 0;
			for ( int i = l - 1 ; i < r ; i++) {
				sum += a[i];
			}
			cout << sum << endl;
		}
	}
}
