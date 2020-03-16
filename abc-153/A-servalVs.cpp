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
	ll h,a;
	cin >> h >> a;
	ll count =0;
	while (1) {
		if (h <=0) break;
		h = h - a;
		count++;
	}
	cout << count << endl;
	return 0;
}
