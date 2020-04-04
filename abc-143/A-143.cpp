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
	int a,b;
	cin >> a >> b;
	int c = a - b*2;
	if (c >0) {
		cout << c << endl;
		return 0;
	}
	cout << 0 << endl;
	return 0;
}
