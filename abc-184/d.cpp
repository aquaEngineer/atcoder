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
/* 桁数std::setprecision(2)*/
void printVec(std::vector<char> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}


int main() {
    int n,m;
    cin >> n >> m;
    vector <int>a(m);
    for(int i = 0;i<m;i++) {
        cin >> a[i];
    }
    a.push_back(n+1);
    sort(a.begin(),a.end());
    int cur =1;
    int ans =0;
    int w = n;
    vector <int>s;
    for(int i=0; i < a.size(); i++) {
        if (a[i]-cur != 0) {
            w = min(w,a[i]-cur);
            s.push_back(a[i]-cur);
        }
        cur = a[i]+1;
    }
    for(int i = 0; i < s.size(); ++i) {
        ans += (s[i] + (w -1)) / w;
    }
    cout << ans << endl;

}