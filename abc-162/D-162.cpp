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
	string s;
	cin >> s;
	int sum =0;
	for (int i=0;i <n;i++) {
		for (int j= 0 ; j<n ;j++) {
			if (i >= j) {
				continue;
			}
			for (int k= 0 ; k<n ;k++) {
				if (j >= k) continue;
				if (s[i] != s[j] && s[i] != s[k] && s[j] != s[k]) {
					if ((j -i) != (k -j)) {
						sum ++;
					}
				}
			}
		}
	}
	cout << sum << endl;
	return 0;
}
