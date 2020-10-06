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
    int n,m;
    cin >> n;
    vector <string> s(n);
    rep(i,0,n) {
        cin >> s[i];
    }
    cin >> m ;
    vector <string> t(m);
    rep(i,0,m) {
        cin >> t[i];
    }
    int ma = 0;
    rep(i,0,n) {
        int count =0;
       rep(j,0,n)  {
           if (s[i] == s[j]) count++;
       }
       rep(j,0,m) {
           if (s[i] == t[j]) count--;
       }
       ma = max(ma,count);
    }
    cout << ma << endl;
}