#include<bits/stdc++.h>
using namespace std ;
main () {
	int k;
	cin >> k ;
	while ( k -- ) {
		long int n;
		cin >> n;
		long long a;
		for ( int i  = 2 ; i < sqrt(n) ; i++) {
			while ( n % i == 0) {
				cout << i << " ";
				n = n / i;
			}
		}
		if ( n > 1) cout << n;
		cout << endl;
	}
}
