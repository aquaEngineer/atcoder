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
	char a,b;
	string x,y;
	cin >> a >> b;
	for (int i = 0; i < b - '0'; i++) {
		x += a;
	}
	for (int i = 0; i < a - '0'; i++) {
		y += b;
	}
	if (x <=y) {
		cout << x << endl;
	} else {
		cout << y << endl;
	}
}

