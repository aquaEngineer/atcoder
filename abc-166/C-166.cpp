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
	int n,m,c;
	cin >> n >> m >> c;
	vector <int> b(m+1);
	rep(i, m+1) {
		if (i == 0) continue;
		cin >> b[i];
	}
	int count = 0;
	vector <vector<int>> a(n+1, vector<int>(m+1));
	for (int i=1;i<=n;i++) {
		int sum = 0;
		for(int j=1; j <=m;j++) {
			cin >> a[i][j];
			sum += a[i][j] * b[i];
		}
		if (sum >0) count++;
	}
	cout << count << endl;
}
