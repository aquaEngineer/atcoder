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

const int INF = 1001001001;
int main() {
    int n;
    int m;
    cin >> n >> m;
    vector <int> to[100005];
    int a,b;
    rep(i,0,m) {
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int> q;
    vector <int> dist(n, INF);
    vector <int> pre(n, -1);
    dist[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : to[v]) {
            if (dist[u] != INF) continue;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }
    cout << "Yes" << endl;
    rep(i,0,n) {
        if (i == 0) continue;
        int ans = pre[i];
        ++ans;
        cout << ans << endl;
    }
    return 0;
}