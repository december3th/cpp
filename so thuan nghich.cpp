#include<bits/stdc++.h>
using namespace std;
int kt (long long n) {
	int a[100] , dem = 0 ;
	while ( n  != 0) {
		a[dem++] = n % 10 ;
		n = n / 10 ;
	}
	int d = dem - 1 , b = 0;
	while(b <= d ) {
		if (a[b] != a[d])
		return 0 ;
		d--;b++;
	}
	return 1 ;
}
main () {
	int k ;
	cin >> k;
	while (k--) {
		long long n ;
		cin >> n;
		if (kt(n) == 1) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}


