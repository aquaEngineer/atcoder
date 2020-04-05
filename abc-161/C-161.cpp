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
	ll n,k;
	cin >> n >> k;
	ll a = n % k;
	cout << min(a, k-a) << endl;
	return 0;
}
