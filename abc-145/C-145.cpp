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
 
int main () {
    int n;
    cin >> n;
    vector <int> x(n);
    vector <int> y(n);
    rep(i,0,n) {
        cin >> x[i] >> y[i];
    }
    double sum = 0;
    rep (i, 0,n) {
        rep(j, 0, n) {
            if (i ==j) continue;
            int b= pow(x[i]-x[j],2)+ pow(y[i]-y[j],2);
            sum += sqrt(b);
        }
    }
    int c= 1;
    rep (i,1,n+1){
        c *=i;
    };
    cout << setprecision(14) << (sum / n) << endl;

}