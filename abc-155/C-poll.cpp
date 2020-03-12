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
	ll n;
	cin >> n;
	vector <string> str(n);
	for (ll i = 0; i< n; i++) {
		cin >> str[i];
	}
	cout << "-------------" << endl;
	sort(str.begin(),str.end());
	int count =0;
	int maxCount =0;
	for (ll i = 0; i<n-1;i++) {
		if (str[i] == str[i + 1]) {
			count++;
		}
		else {
			if (maxCount < count) {
				maxCount = count;
			}
			count =1;
		}
		if (i == n-2 && count > maxCount) {
			count ++;
			maxCount = count;
		}
	}

	count =0;
	for (ll i = 0; i<n-1;i++) {
		if (str[i] == str[i + 1]) count++;
		else {
			if (maxCount == count) {
				cout << str[i] << endl;
			}
			count =1;
		}
		if (i == n-2 && count == maxCount -1) {
			cout << str[i+1] << endl;
		}
	}

	return 0;
}
