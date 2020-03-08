#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	int n,m;
	cin >> n >> m;
	vector <int> c(m,0);
	vector <int> s(m,0);
	for (int i = 0 ; i < m; i++) {
		cin >> c[i] >> s[i];
	}

	for(int i = 0; i< 1000;i++) {
		int x = i /10;
		int keta = 1;
		vector <int> y (1, i % 10);
		while (x) {
			y.push_back(x % 10);
			x /= 10;
			keta++;
		}

		if (keta != n) continue;
		bool flag = true;
		reverse(y.begin(), y.end());
		for (int j = 0; j < m; j++) {
			if (y[c[j]-1] != s[j]) flag =false;
		}
		if (flag) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
