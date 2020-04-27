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
	vector <char> s(4);
	for (int i =0;i<4;i++) {
		cin >> s[i];
	}
	int count =1;
	int ma = 0;
	for (int i =1;i<4;i++) {
		if (s[i] == s[i-1]) count ++;
		else count =1;
		ma = max(ma,count);
	}
	if (ma >=3) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
