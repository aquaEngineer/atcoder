#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	ll n;
	cin >> n;
	vector <ll> a(n);
	vector <ll> b(n);
	a[0] = 0;
	for (int i = 1;i< n ;i++) {
		cin >> a[i]; 
		b[a[i]-1] ++;
	}
	for (int i =0;i<n;i++) {
		cout << b[i] << endl;
	}
	return 0;
}
