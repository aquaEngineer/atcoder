#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
//str.substr(開始位置, 取り出す長さ);
using namespace std;
using ll = long long;
 
int main() {
	int a,b;
	cin >> a >> b;
	if (b % a ==0) {
		cout << a+b << endl;
	} else {
		cout << b-a << endl;
	}

	return 0;
}
