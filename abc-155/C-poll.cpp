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

	sort(str.begin(),str.end());
	int count =1;
	int maxCount =1;
	for (ll i = 1; i<n;i++) {
		if (str[i] == str[i-1]) {
			count++;
			if (maxCount <= count) {
				maxCount = count;
			}
		}
		else {
			count =1;
		}
	}

	count =1;
	cout << "----------------" << endl;
	for (ll i = 0; i< n; i++) {
		cout << i << ": "<< str[i] << endl;
	}
	cout << "----------------" << endl;
	cout << "maxCount" << maxCount <<endl;
	for (ll i = 1; i<n;i++) {
		if (str[i] == str[i -1]) {count++;
			if (maxCount == count) {
				cout << str[i] << endl;
			}
		}
		else {
			count =1;
			if (maxCount == count) {
				cout << str[i] << endl;
			}
		}
	}

	return 0;
}
