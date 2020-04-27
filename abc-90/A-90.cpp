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
	char a[3][3];
	for (int i = 0;i<3;i++) {
		for (int j = 0;j<3;j++) {
			cin >>a[i][j];
		}
	}
	cout << a[0][0] << a[1][1] << a[2][2] << endl;
	return 0;
}
