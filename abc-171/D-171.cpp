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
    ll n;
    ll b;
    map <ll,ll> a;
    cin >>n;
    ll sum = 0;
    for(ll i = 0;i<n;i++) {
        cin >> b;
        a[b]++;
        sum += b;
    }
    ll q;
    cin >> q;
    pair <ll,ll> c;
    vector <ll> ans(q);
    for(ll i = 0;i<q;i++) {
        cin >> c.first >> c.second;
        decltype(a)::iterator it = a.find(c.first);
        if (it != a.end()) {
            ll f = a[c.first];
            a[c.first] = 0;
            a[c.second] += f; 
            sum -= c.first *f;
            sum += c.second * f;
            cout << sum << endl;
        } else {
            cout << sum << endl;
        }
    }
}
