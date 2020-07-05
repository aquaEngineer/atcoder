
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
    map <string, int> a;
    string b;
    a["AC"] = 0;
    a["WA"] = 0;
    a["TLE"] = 0;
    a["RE"] = 0;
    rep(i,0,n) {
        cin >> b;
        if (b == "AC") {
            a["AC"]++;

        } else if (b == "WA"){
            a["WA"]++;

        } else if (b == "TLE") {
            a["TLE"]++;

        } else {
            a["RE"]++;

        }
    }
    cout << "AC x " << a["AC"] << endl;
    cout << "WA x " << a["WA"] << endl;
    cout << "TLE x " << a["TLE"] << endl;
    cout << "RE x " << a["RE"] << endl;
}