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
    int a;
    cin >> a;
    if (a >= 400 && a <=599) cout << 8 << endl;
    else if (a >= 600 && a <=799) cout << 7 << endl;
    else if (a >= 800 && a <=999) cout << 6 << endl;
    else if (a >= 1000 && a <=1199) cout << 5 << endl;
    else if (a >= 1200 && a <=1399) cout << 4 << endl;
    else if (a >= 1400 && a <=1599) cout << 3 << endl;
    else if (a >= 1600 && a <=1799) cout << 2 << endl;
    else if (a >= 1800 && a <=1999) cout << 1 << endl;
}