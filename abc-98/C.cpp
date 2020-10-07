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
void printVec(std::vector<char> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}


int main() {
    int n;
    cin >> n;
    vector <char > s(n);
    vector <pair <int,int>> a(n); 
    rep(i,0,n) {
        cin >> s[i];
    }
    int l =0;
    int r = 0;
    rep(i,1,n) {
        if (s[i] == 'E') ++r;
    }
    a[0].first = l;
    a[0].second = r;
    int mi = l+r;

    rep(i,1,n) {
        if (s[i-1] == 'W') ++l;
        if (s[i] == 'E') --r;
        a[i].first = l;
        a[i].second = r;
        mi = min(mi, l+r);
    }
    cout << mi << endl;
}