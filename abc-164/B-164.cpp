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
	int a,b,c,d;
	cin >> a >> b >> c >>d;
	while(1) {
		c -= b;
		if (c <=0) {
			cout << "Yes" << endl;
			return 0;
		}
		a -= d;
		if (a <=0) {
			cout << "No" << endl;
			return 0;
		}
	}
	return 0;
}
