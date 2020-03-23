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
	int ans;
	ans = (n * (n-1)) /2;
	if (m>=2) {
		ans = ans + (m * (m -1) /2);
	}
	cout << ans << endl;
	return 0;
}

