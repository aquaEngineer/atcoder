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
	ll a,b,n;
	cin >> a >> b >>n;
	ll ma = 0;
	int c = n %2;
	for(ll i =0; i <= n/2 ; i++) {
		ma = max (ma, ((a * i) / b) -(a * (i / b)));
	}
	cout << ma*2 +c << endl;
}
