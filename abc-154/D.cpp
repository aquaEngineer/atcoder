#include <bits/stdc++.h> 
// #include <atcoder/all>

using namespace std;
// using namespace atcoder;
using ll = long long;
#define rep(i,a,b) for(ll i=(a); i<(b); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pai 3.14159265358979323846
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}

const int mod = 1000000007;
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
// setprecision(10)
void printVec(std::vector<char> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}


int main() {
    int n,k;
    cin >> n >> k;
    vector <ll> p(n);   
    rep(i,0,n) {
        cin >> p[i];
        ++p[i];
    }
    vector <ll> s(n+1,0);
    rep(i,0,n) {
        s[i+1] = s[i] + p[i];
    }
    ll dif = 0;
    for(int i =0; i + k <= n; i++) {
        dif = max(dif,s[i+k] - s[i]);
    }

    cout << setprecision(10) << (double)dif /2 << endl; 
}