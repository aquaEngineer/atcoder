#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main () {
    int n,m,x;
    cin >> n >> m >> x;
    vector <int> c(n);
    vector <vector <int>> a(n,vector<int>(m));
    for(int i =0; i<n;i++) {
        cin >> c[i];
        for(int j = 0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    int ans=10000000;
    for (int bit=0; bit<(1<<n); ++bit) {
    bool flag=true;
    int sum=0;
    vector<int> v(m);
    for(int i;i <n; i++) {
      if (bit&1<<i) {
        for(int j = 0; j <m ;j++) {
            v[j]+=a[i][j];
        }
        sum+=c[i];
      }
    }
    //cout << sum <<endl;
    for(int i = 0; i< m; i++) {
        if (v[i]<x) flag=false;
    }
    if (flag) ans=min(ans,sum);
  }
  if (ans==10000000) {
      cout << "-1" << endl;
      return 0;
  }
  cout << ans << endl;
    
