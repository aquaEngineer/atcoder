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
	vector <char> str(n);
	int count =0;
	for(int i =0; i< n; i++) {
		cin >> str[i];
	}
	for(int i =0; i< n-2; i++) {
		if (str[i] == 'A' && str[i+1] == 'B' && str[i+2] == 'C') {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
