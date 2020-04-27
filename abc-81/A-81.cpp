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
	string s;
	int count =0;
	cin >> s;
	if (s[0] == '1') count++;
	if (s[1] == '1') count++;
	if (s[2] == '1') count++;
	cout << count << endl;
	return 0;
}
