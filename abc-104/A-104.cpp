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
	int r;
	cin >> r;
	if (r < 1200) cout << "ABC" << endl;
	else if (r >=1200 && r <2800) cout << "ARC" << endl;
	else cout << "AGC" << endl;
	return 0;
}
