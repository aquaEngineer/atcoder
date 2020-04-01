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
	string str;
	int n;
	cin >> n;
	cin >> str;
	if (n %2 == 1) {
		cout << "No" << endl;
		return 0;
	}
	int a = n/2;
	for (int i = 0;i < a; i++) {
		if (str[i] != str[i+a]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
