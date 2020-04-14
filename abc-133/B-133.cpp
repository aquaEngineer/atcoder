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
	int n,d;
	cin >> n >> d;
	int x[n][d];
	int ans =0;
	for (int i =0;i<n;i++) {
		for (int j =0; j<d;j++) {
			cin >> x[i][j];
		}
	}
	for (int i =0;i<n -1;i++) {
		for (int j =i+1; j<n;j++) {
			int sum = 0;
			for (int k =0; k< d ;k++) {
				sum += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
			}
			int sq = sqrt(sum);
			for (int l =0;l < sq + 1; l++) {
				if (sum == (l * l)) {
					ans++;
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
