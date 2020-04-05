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
	int n,m;
	cin >> n >> m;
	vector <int> a(n);
	int sum =0;
	for (int i =0;i <n;i++) {
		cin >> a[i];
		sum += a[i];
	}
	double b = sum * ((double)1/(4*m));
	int count =0;
	for (int i =0; i<n;i++) {
		if (a[i] >= b) {
			count++;
		}
	}
	if (count >= m) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
