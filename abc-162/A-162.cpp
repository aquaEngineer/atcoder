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
	cin >> str;
	for(int i=0;i<3;i++) {
		if (str[i] == '7') {
			cout << "Yes" <<endl;
			return 0;
		}
	}
			cout << "No" <<endl;
			return 0;
	return 0;
}
