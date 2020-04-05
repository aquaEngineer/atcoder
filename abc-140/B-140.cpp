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
	int n;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	vector <int> c(n-1);
	for (int i =0; i < n ; i++) cin >> a[i];
	for (int i =0; i < n ; i++) cin >> b[i];
	for (int i =0; i < n-1 ; i++) cin >> c[i];
	int sum =0;
	for (int i =0; i < n ; i++) {
		sum += b[a[i]-1];
		if (i >0) {
			if ((a[i] -1) == a[i-1]) {
				sum += c[a[i-1]-1];
			}
		}
	}
	cout << sum << endl;
	return 0;
}
