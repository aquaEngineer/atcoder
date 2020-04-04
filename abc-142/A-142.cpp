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
	int n;
	cin >> n;
	int x = n/2;
	if (n %2 ==1) {
		x++;
	}
	cout << (double)x/n << endl;
	return 0;
}
