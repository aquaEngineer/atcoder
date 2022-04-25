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

int search(vector<pair<int,int>> a, int v) {
    for(int i = 0 ; i <a.size(); i++) {
        if (a[i].second == v) {
            return i;
        }
    }
    return 0;
}

void vecSort(vector<pair<int,int>> &a) {
    sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int> b) {
        if (a.first != b.first) {
            return a.first  > b.first;
        } else {
            return  a.second < b.second;
        }
    });
}

int judge (char a,char b) {
    if (a == b) return 0;
    if (a == 'G' && b == 'C') return 1;
    if (a == 'G' && b == 'P') return 2;
    if (a == 'C' && b == 'P') return 1;
    if (a == 'C' && b == 'G') return 2;
    if (a == 'P' && b == 'G') return 1;
    if (a == 'P' && b == 'C') return 2;
}

int main() {
    int n;
    int m;
    cin >> n >>m;
    vector <vector <char>> a(2*n +1,vector<char> (m +1));
    for (int i = 1;i<2*n+1; i++) {
        for (int j = 1; j <m+1; j++) {
            cin >> a[i][j];
        }
    }
    vector <pair<int,int>> b(2*n);
    pair <int,int> c;
    for (int i =1; i <2*n +1; i++) {
        c.first = 0;
        c.second = i;
        b[i-1] =  c;
    }

    int s;
    int result = 0;
    for (int i = 1; i <m+1; i++) {
        for (int j = 0; j < b.size() -1 ; j +=2) {
            int x = b[j].second;
            int y = b[j+1].second;
            result = judge(a[x][i], a[y][i]);
            if (result == 1) {
                s = search(b, x);
                b[s].first++;
                
            } else if (result == 2) {
                s = search(b, y);
                b[s].first++;
            } else {

            }
        }
        vecSort(b);
    }
    for (int i =0 ;i < b.size(); i++) {
        cout << b[i].second<< endl;
    }
}