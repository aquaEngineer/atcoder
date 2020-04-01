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
	cin >> n >> str;
	for (int i =0;i<str.size();i++) {
		cout << (char)(((str[i] - 'A') + n) % 26 + 'A');
	}
	cout << endl;
	return 0;
}
