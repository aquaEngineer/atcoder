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
	int n,k;
	cin >> n >> k;
	vector <int> ans(n,0);
	for(int i =0; i< k;i++) {
		int d;
		cin >> d;
		int a[d];
		for(int j =0; j <d ; j ++) {
			cin >> a[j];
			ans[a[j]-1] = 1;
		}
	}
	int count =0;
	for(int i =0;i < n; i++) {
		if(ans[i] ==0) count++;
	}
	cout << count <<endl;
}
