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
    int h,w;
    cin >> h >> w;
    vector <vector<char>> s(h, vector <char> (w));  
    vector <vector<bool>> check(h, vector<bool> (w,false));  
    rep(i,0,h) {
        rep(j,0,w) {
            cin >> s[i][j];
        }
    }
    rep(i,0,h) {
        rep(j,0,w) {
            if (s[i][j] == '#') {
                if (i-1 >=0) {
                    if (s[i-1][j] == '#') {
                        check[i][j] = true;
                        check[i-1][j] = true;
                        continue;
                    }
                } 
                if (i+1 < h) {
                    if (s[i+1][j] == '#') {
                        check[i][j] = true;
                        check[i+1][j] = true;
                        continue;

                    }
                }
                if (j -1 >= 0) {
                    if (s[i][j-1] == '#') {
                        check[i][j] = true;
                        check[i][j-1] = true;
                        continue;

                    }
                }
                if (j +1 < w) {
                    if (s[i][j+1] == '#') {
                        check[i][j] = true;
                        check[i][j+1] = true;
                        continue;

                    } 
                }
            }
        }
    }
    bool flag = true;
    rep (i,0,h) {
        rep(j,0,w) {
            if (s[i][j] == '#') {
                if (!check[i][j]) flag = false;
            } else {
                if (check[i][j]) flag = false;
            }
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}