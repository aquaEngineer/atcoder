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
	for (int i = 0; i< 20; i++) {
		if (((a-1)*i +1) >= b) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
