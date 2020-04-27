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
	vector <char> a(4);
	int ans = 0;
	for (int i =0; i<4;i++) {
		cin >> a[i];
		if (a[i] == '+') ans++;
		else ans--;
	}
	cout << ans << endl;

	return 0;
}
