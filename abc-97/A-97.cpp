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
	cin >> a >> b >>c >> d;
	if (abs(a-c) <= d || (abs(a-b) <=d && abs(b-c) <= d)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
