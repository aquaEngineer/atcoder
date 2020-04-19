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
	cin >> n;
	vector <int> a(n);
	for (int i =0; i < n ; i++) cin >> a[i];
	int count =0;
	for (int i =1; i < n-1 ; i++) {
		if (a[i] > a[i-1] && a[i] > a[i+1]) continue;
		if (a[i] < a[i-1] && a[i] < a[i+1]) continue;
		count++;
	}
	cout << count << endl;
	return 0;
}
