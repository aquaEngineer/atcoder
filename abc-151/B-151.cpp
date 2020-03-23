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
	int n,k,m;
	cin >> n >> k >> m;
	vector <int> a(n-1);
	int sum = 0;
	for (int i =0;i<n-1;i++) {
		cin >> a[i];
		sum += a[i];
	}
	int ave=0;
	for (int i =0; i<=k;i++) {
	ave = (sum + i) / n;
		if (ave >= m) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}
