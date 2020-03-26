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
	int c = a + b;
	if (c == 3) {
		cout << 3 << endl;
	}
	if (c == 4) {
		cout << 2 << endl;
	}
	if (c == 5) {
		cout << 1 << endl;
	}
}
