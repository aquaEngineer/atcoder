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
	int n,k;
	string s;
	cin >> n >> k;
	cin >>s;
	for (int i =0;i<n;i++) {
		if (i == k-1) {
			s[i] = s[i] - ('A'-'a');
		}
		cout << s[i];
	}
	cout << endl;
	return 0;
}
