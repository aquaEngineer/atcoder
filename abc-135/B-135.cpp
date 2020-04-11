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
	vector <int> p(n);
	for (int i =0;i<n;i++) cin >> p[i];

	int count = 0;
	for (int i =0;i<n;i++) {
		if(p[i] != i +1) {
			count++;
		}
	}
	if (count >2) {
		cout << "NO" <<endl;
		return 0;
	} else {
		cout << "YES" <<endl;
		return 0;
	}
	return 0;
}
