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
	int n,l;
	cin >> n >> l;
	vector <int> a(n);
	int sum =0;
	for (int i =0; i<n;i++) {
		a[i] = l + i;
		sum += a[i];
		//cout << a[i]<< endl;
	}
	int mi;
	int x =0;
	//cout << sum << endl;
	for (int i =0; i<n;i++) {
		int sum2 =0;
		for (int j =0; j<n;j++) {
			if (i != j) sum2 += a[j];
		}
		if (i ==0) {
			mi = abs(sum-sum2);
			//cout << mi << endl;
		}
		else {
			//cout << i << endl;
			//cout << mi << endl;
			//cout << abs(sum -sum2) << endl;
			if (mi > abs(sum-sum2)) {
				x = i;
				//cout << x << endl;
			}
		}
		//cout << abs(sum-sum2) << endl;
	}
	//cout << x << endl;
	int ans;
	for (int i =0; i<n;i++) {
		if (i !=x) {
			ans += a[i];
		}
	}
	cout << ans << endl;
	return 0;
}
