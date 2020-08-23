
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <iomanip>  // std::setprecision()
#include <set>

using namespace std;
using ll = long long;
#define rep(i,a,b) for(ll i=(a); i<(b); i++)
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
    vector <ll> a(n+1);
    rep(i,1,n+1) {
        cin >> a[i];
    }
    int count =0;
    for(int i =0;i <a.size();i++) {
        for(int j = i+1; j< a.size();j++) {
            for(int k =j +1; k < a.size() ;k++) {
                if (a[i] + a[j] > a[k] && a[j] + a[k] > a[i] && a[i] + a[k] > a[j]) {
                    if (a[i] == a[j] || a[j] == a[k] || a[i] == a[k]) continue;
                    count++;
                }
            }
        }
    }
    cout << count << endl;

}