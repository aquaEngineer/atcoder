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
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main () {
    int n;
    cin >> n;
    vector <ll> h(n);
    rep(i,n) {
        cin >> h[i];
    }
    ll ma = 0;
    ll count =0;
    for(int i =0;i< n-1; i++) {
        if(h[i] >= h[i+1]) {
            count++;
            ma = max(ma,count);
        }
        else {
            count =0;
        }
    }
    cout << ma << endl;
}