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
	int val = 0;
	int mi;
	for(int i =0;i < n; i++) {
		cin >> a[i];
	}
	for(int i =0; i<n;i++) {
		val += pow((a[i] - 1),2);
	}
	mi = val;
	for(int i =2;i <=100; i++) {
		val = 0;
		for (int j=0;j <n; j++) {
			val += pow((a[j] - i),2);
		}
		mi = min(mi,val);
	}
	cout << mi << endl;
}

