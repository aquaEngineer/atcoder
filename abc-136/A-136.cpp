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
	cin >> a >> b >>c;
	if ((a-b) < c) {
		cout << c-(a-b) << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
