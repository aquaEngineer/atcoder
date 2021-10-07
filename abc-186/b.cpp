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
    int h,w;
    cin >> h >> w;
    vector <vector<int>> a(h,vector<int> (w));
    int ma = 0;
    int mi = 1000;
    for (int i = 0; i<h;i++) {
        for (int j =0; j <w;j++) {
            cin >> a[i][j];
            ma = max(ma, a[i][j]);
            mi = min(mi, a[i][j]);
        }
    }
    int ans = 0;
    while (mi != ma) {
        for (int i = 0; i<h;i++) {
            for (int j =0; j <w;j++) {
                if(ma == a[i][j]) {
                    a[i][j]--;
                    ans++;
                }
            }
        }
        ma = 0;
        for (int i = 0; i<h;i++) {
            for (int j =0; j <w;j++) {
                ma = max(ma,a[i][j]);
            }
        }
    }
    cout << ans << endl;
}