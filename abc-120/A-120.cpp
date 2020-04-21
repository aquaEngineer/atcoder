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
	int a,b,c;
	cin >> a >> b >> c;
	int ans = b/a;
	if (ans > c) ans = c;
	cout << ans << endl;
	return 0;
}
