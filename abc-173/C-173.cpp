
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
#include <iomanip>  // std::setprecision()
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pai 3.14159265358979323846
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main() {
    int h,w;
    int k;
    cin >> h>> w >> k;
    vector <vector <char>> a(h, vector<char>(w));
    vector <vector <char>> b(h, vector<char>(w));
    for (int i = 0; i  <h; i++) {
        for (int j =0; j <w ; j++) {
            cin >>  a[i][j];
        }
    }
    int ans = 0;
        for(int bit = 0; bit < (1 << h); bit++){
            copy(a.begin(), a.end(), b.begin());
            for(int bit2 = 0; bit2 < (1 << w); bit2++){
                int count = 0;
                for (int i = 0; i < h; i++) {
                    for (int j =0; j < w ; j++) {
                        if (b[i][j] == '#' &&!(bit & 1 <<i) && !(bit2 & 1 << j)) {
                            count++;
                        }
                    }
                }
                if (count == k) ans++;
            }
        }
    cout << ans << endl;
}