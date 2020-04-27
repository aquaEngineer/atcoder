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
	double c = (double) (a+b)/2;
	if (c > (int) (a+b)/2) c +=1;
	cout << (int) c << endl;
	return 0;
}
