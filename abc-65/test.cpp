
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
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main () {
	int x;
	cin >> x;
	while (1) {
		bool flag = true;
		for (int i =2; i< x; i++) {
			if (x % i == 0)  {
				flag = false;
			}
		}
		if (flag) {
			cout << x <<endl;
			return 0;
		} else {
			x++;
		}
	}
}
