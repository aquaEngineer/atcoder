#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <numeric>
#include <limits>
#include <type_traits>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
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
 
int main () {
    ll n,k,q;
    cin >> n >>k >>q;
    vector <int> a(q);
    for (ll i =1;i<=q;i++) {
        cin >> a[i];
    }
    vector <int > b(n,k-q);
    for(ll i =1;i<=q;i++) {
        b[a[i]-1] ++;
    }
    for (ll i=0;i<n;i++) {
        if (b[i] >0) {
            yes
        } else {
            no
        }
    }
}