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

ll cal(ll n, vector <pair <ll,ll>> &l)
{
    ll s = floor(sqrt(n));
    ll count =0;
    pair <ll,ll> x;
    for(ll i = 2; i <= s;i++) {
        if (n % i == 0) {
            count = 0;
            do {
                count++;
                n /= i;
            } while (n% i == 0);
            x = make_pair(i, count);
            l.push_back(x);
        }
    }
    if (n >s) {
        x = make_pair(n, 1);
        l.push_back(x);
    }
    return l.size();
}
ll counter(ll n) {
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        n -= i;
        ans++;
    }
    return ans;
}

int main ()
{
    ll n; cin >> n;
    vector <pair <ll, ll>> l;
    cal(n,l);
    int ans =0;
    for(pair<ll, ll>x: l){
        ans += counter(x.second);
    }
    cout << ans << endl;

}

