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
    int n,k;
    cin >> n >> k;
    vector  <int> a(n);
    for (int i =0; i<n;i++) {
        cin >> a[i];
    }
    vector <int> b;
    b.push_back(1);
    int count =0;
    while(1) {
        int now = b.back();
        bool flag = false;
        for(int i =0; i<b.size();i++) {
            if (a[now-1] == b[i]) {
                count = i;
                flag = true;
                break;
            }
        }
        if (flag) break;
        b.push_back(a[now-1]);
    }
    cout << count << endl;
    cout << b.size() << endl;
    rep (i, b.size()) {
        cout << b[i] << endl;
    }
}