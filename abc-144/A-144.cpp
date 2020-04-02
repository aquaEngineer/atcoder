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
	if (a >9 || b >9) {
		cout << -1 <<endl;
		return 0;
	}
	cout << a * b <<endl;
	return 0;
}
