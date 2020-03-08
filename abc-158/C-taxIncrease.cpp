#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	int a,b;
	cin >> a >> b;
	for (int i =0 ; i <10000; i++) {
		if (int (i * 0.08) == a && int (i * 0.1) == b) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
