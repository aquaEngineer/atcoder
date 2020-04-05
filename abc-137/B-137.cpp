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
	int k,x;
	cin >> k >>x;
	for (int i = x-k+1; i< x+k;i++) {
		if (i >=-1000000 && i <= 1000000) {
			cout << i << ' ';
		}
	}
	cout << endl;
	return 0;
}
