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
    string s;
    cin >> s;
    if (s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }
    int count =0;
    rep(i,2,s.size()-1) {
        if(s[i] == 'C') count++;
    }
    if (count != 1) {
        cout << "WA" << endl;
        return 0;
    }
    rep(i,1,s.size()) {
        if(!((s[i] >= 'a' && s[i] <= 'z') || s[i] == 'A' || s[i] == 'C')) {
        cout << "WA" << endl;
        return 0;
        }
    }
    cout << "AC" << endl;
    return 0;

}