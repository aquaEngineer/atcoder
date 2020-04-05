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
	if (s == "Sunny") {
		cout << "Cloudy" << endl;
		return 0;
	}
	if (s == "Cloudy") {
		cout << "Rainy" << endl;
		return 0;
	}
	if (s == "Rainy") {
		cout << "Sunny" << endl;
		return 0;
	}
	return 0;
}
