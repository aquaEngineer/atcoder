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
	int count;
	int a;
	int ans=0;
	for (int i =1;i<= n;i++) {
		count =0;
		a = i;
		while (1) {
			a = a /10;
			count++;
			if (a == 0) {
				break;
			}
		}
		if (count % 2 == 1) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
