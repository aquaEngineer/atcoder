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
    string s;
    map <char,int> m,m2;
    cin >> s;
    for(int i = 0 ; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            m[s[i]] = 0;
        }
        m[s[i]]++;
    }

    int res = 0;
    if (s.size() >= 3) {
        for (int i = 1 ; i <= 9; i++) {
            for (int j = 1 ; j <= 9; j++) {
                for (int k = 1; k <= 9; k++) {
                    m2 = m;
                    m2.erase()
                    if (m.find(s[i]) == m.end() || m.find(s[j]) == m.end() || m.find(s[k]) == m.end()) {
                        continue;
                    }
                    res = (int) s[i] * 100 + (int) s[j] * 10 + (int) s[k];
                    if (res % 8 == 0 ) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    } else if (s.size() ==2) {
        for (int i = 1 ; i <= 9; i++) {
            for (int j = 1 ; j <= 9; j++) {
                    if (m.find(s[i]) == m.end() || m.find(s[j]) == m.end()) {
                        continue;
                    }
                    int res = (int) s[i] * 10 + (int) s[j];
                    if (res % 8 == 0 ) {
                        cout << "Yes" << endl;
                        return 0;
                    }
            }
        }
    } else {
        if (s[0] == '8') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}