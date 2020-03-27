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
	int n;
	cin >> n ;
	string a,b;
	cin >> a >> b;
	for(int i = 0; i < n; i++) {
		cout << a[i] << b[i];
	}
	cout << endl;
}
