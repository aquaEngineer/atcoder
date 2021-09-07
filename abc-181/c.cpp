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
    vector <pair<int,int>> a(n);
    for(int i = 0;i <n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n ;j++) {
            for(int k =0; k< n ;k++) {
                if (i == j || j == k || i == k) {
                    continue;
                }
                int dx1 = a[i].first - a[j].first;
                int dx2 = a[i].first - a[k].first;
                int dy1 = a[i].second - a[j].second;
                int dy2 = a[i].second - a[k].second;
                if (dx1 * dy2 == dx2 * dy1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}