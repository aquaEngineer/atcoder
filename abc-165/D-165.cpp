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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
 
int main () {
	ll a, b, n;
	cin >> a >> b >> n;
	ll x  =0;
	if (b-1 < n) {
		x = b-1;
	} else {
		x = n;
	}
	cout << (ll) ((a*x) / b) - (a * (ll) (x/b)) << endl;
}
