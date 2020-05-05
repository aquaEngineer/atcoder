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
	ll x;
	cin >> x;
	ll sum = 100;
	int count = 0;
	while(1) {
		sum = sum * 1.01;
		count++;
		if (sum >= x) {
			cout << count << endl;
			return 0;
		}
	}

}
