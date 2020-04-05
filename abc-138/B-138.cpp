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
	double sum =0;
	for (int i =0;i<n;i++) {
		cin >> a[i];
		sum += (double) 1/a[i];
	}
	cout << (double) 1/ sum << endl;
	return 0;
}
