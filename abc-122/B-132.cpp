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
	string a;
	cin >> a;
	int ma =0;
	int count =0;
	for (int i=0;i<a.size();i++) {
		if (a[i] != 'A' && a[i] != 'T' &&a[i] != 'G' && a[i] != 'C') {
			count =0;
			continue;
		}
		count++;
		ma = max(ma,count);
	}
	cout << ma << endl;
	return 0;
}
