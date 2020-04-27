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
	int s,w;
	cin >> s >> w;
	if (w >= s) cout << "unsafe" << endl;
	else cout << "safe" << endl;
	return 0;
}
