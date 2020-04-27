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
	int a,b;
	cin >> a >>b;
	if ((a *b) %2==0) cout << "Even" << endl;
	else cout << "Odd" << endl;
	return 0;
}
