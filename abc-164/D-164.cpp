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
	cin >> s;
	ll a;
	int count =0;
	for (int i= 0; i < s.size(); i++) {
		for (int j= i +1; j < s.size(); j++) {
			a = stoll(s.substr(i,j-i));
			//cout << s.substr(i, j-i) << endl;
			//continue;
			if (a % 2019 == 0) count++;
		}
	}
		cout << count << endl;

}
