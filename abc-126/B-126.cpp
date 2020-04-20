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
	int s;
	int a,b;
	cin >> s;
	a = s /100;
	b = s % 100;
	if (a >= 1 && a <= 12 ) {
		if (b >= 1 && b <= 12) {
			cout << "AMBIGUOUS" << endl;
		} else {
		cout << "MMYY" << endl;
		}
	} else {
		if (b >= 1 && b <=12) {
		cout << "YYMM" << endl;
		}	
		else {
			cout << "NA" << endl;
		}
	}
	return 0;
}
