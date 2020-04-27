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
	int x,a,b;
	cin >> x >> a >> b;
	x -= a;
	x = x %b;
	cout << x << endl;
	return 0;
}
