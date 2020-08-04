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
   vector <char> a(n);
   int rc = 0,wc = 0;
   rep(i,0,n) {
       cin >> a[i];
       if (a[i] == 'R') rc++;
       if (a[i] == 'W') wc++;
   }
   if (rc ==0 || wc== 0) {
       cout << 0 <<endl;
       return 0;
   }
   int count =0;
   for (int i =0; i < rc; i++) {
       if(a[i] == 'W') {
           count++;
       }
   }
   cout << count << endl;

}