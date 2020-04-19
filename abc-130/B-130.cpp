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
	int n,x;
	cin >> n >> x;
	vector <int> l(n);
	vector <int> d(n);
	for (int i =0;i<n;i++) cin >> l[i];
	d[0] =0;
	for (int i =1; i< n+1;i++) {
		d[i] = d[i-1] + l[i-1];
	}
	int ans =0;
	for (int i =0; i< n+1;i++) {
		if (d[i] <= x) ans++;
	}
	cout << ans << endl;
	return 0;
}
