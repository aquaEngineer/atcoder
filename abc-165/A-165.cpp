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
	int k ,a,b;
	cin >> k >> a >> b;
	for (int i =a; i <=b ; i++) {
		if (i % k == 0) {
			cout << "OK" << endl;
			return 0;
		}
	}
	cout << "NG" << endl;
	return 0;

}
