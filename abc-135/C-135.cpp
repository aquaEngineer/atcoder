
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
    int n;
    cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n);
    rep(i,0,n+1) {cin >> a[i];}
    rep(i,0,n) {cin >> b[i];}
    ll count =0;
    rep(i,0,n) {
        if (a[i] <= b[i]) {
            count += a[i];
            b[i] = b[i] -a[i];
            a[i] =0;
            if (b[i] > 0) {
                if (a[i+1] <= b[i]) {
                    count += a[i+1];
                    b[i] = b[i] -a[i+1];
                    a[i+1] = 0;
                } else {
                    count += b[i];
                    a[i+1] -=  b[i];
                }
            }
        } else {
            count += b[i];
            a[i] = a[i] - b[i];
            b[i] = 0;
        }
    }
    cout << count << endl;
}