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
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum >= 22) {
		cout << "bust" << endl;
		return 0;
	} else {
		cout << "win" << endl;
		return 0;
	}

}
