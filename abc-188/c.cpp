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
    int n;
    cin >> n;
    // vector <ll> a(pow(2,n));
    // vector <ll> b(pow(2,n));
    vector <pair<ll,ll>> a(pow(2,n));
    vector <pair<ll,ll>> b(pow(2,n));
    pair <ll,ll> p;

    for (ll i =0; i < pow(2,n); ++i) {
        cin >> p.first;
        p.second = i +1;
        a[i] = p;
    }
    while (a.size() > 2) {
        b.clear();
        for (ll i =0; i < a.size() -1 ; i +=2) {
            if (a[i].first > a[i+1].first) {
                b.push_back(a[i]);
            } else {
                b.push_back(a[i+1]);
            }
        }
        a = b;
    
    }
    if (a[0].first > a[1].first) {
        cout << a[1].second << endl;
    } else {
        cout << a[0].second << endl;
    }

}