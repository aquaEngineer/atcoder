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
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main() {
    int n,m;
    cin >> n >> m;
    vector <int> l(m+1);
    vector <int> r(m+1);
    int mi = 1000000 ,ma=0;
    rep(i,1,m+1) {
        cin >> l[i] >> r[i];
        ma = max(ma,l[i]);
        mi = min(mi,r[i]);
    }
    int ans =0;
    rep(i,1,n+1) {
        if (i >= ma && i <= mi) {
            ans++;
        }
    }
    cout << ans << endl;
}