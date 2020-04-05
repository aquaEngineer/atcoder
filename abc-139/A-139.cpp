
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
	string a,b;
	for (int i =0; i<3;i++) cin >>a[i];
	for (int i =0; i<3;i++) cin >>b[i];
	int count = 0;
	for (int i =0; i<3;i++) if (a[i] == b[i]) count++;
	cout << count << endl;
	return 0;
}
