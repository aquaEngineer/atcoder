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
	int n,a,b;
	cin >> n >> a >>b;
	int m = n * a;
	m = min(m,b);
	cout << m << endl;
	return 0;
}
