
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <iomanip>  // std::setprecision()
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pai 3.14159265358979323846
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main() {
	int n;
	cin >> n;
	vector <ll> a(100*100*100,0);
	for(int x =1;x <= 100; x++) {
		for(int y =1;y<=100;y++) {
			for(int z =1;z<=100;z++) {
				int tmp = x * x + y*y+z*z + x*y + y*z + z*x;
				a[tmp]++;

			}
		}
	}
	for(int i =1;i <=n;i++) {
		cout << a[i] << endl;
	}
}