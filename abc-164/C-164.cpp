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
	vector <string> a(n);
	for (int i =0;i<n ; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int count = 1;
	for (int i =1; i < n; i++) {
		if (a[i] != a[i-1]) count++;
	}
	cout << count << endl;
	return 0;
}
