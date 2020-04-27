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
	int n,a;
	cin >> n >> a;
	int b;
	b = n % 500;
	if (a >= b) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
