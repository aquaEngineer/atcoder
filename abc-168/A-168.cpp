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
ll gcd(ll a, ll b){if (a%b == 0)  return(b);else  return(gcd(b, a%b));}
ll lcm(ll a, ll b){return a * b / gcd(a, b);}
/* map<string,int> */
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
/* 辞書順 next_permutation(a.begin(),a.end()) */
 
int main() {
    int n;
    cin >> n;
    int tmp;
    if (n >=100) {
        tmp = n %10;
        if (tmp == 2 || tmp==4 || tmp == 5 || tmp ==7 ||tmp == 9) {
            cout << "hon" << endl;
        } else if (tmp == 0 || tmp ==1 || tmp == 6 || tmp ==8) {
            cout << "pon" << endl;
        } else {
            cout << "bon" << endl;
        }

    } else if (n >=10 && n < 100) {
        tmp = n %10;
        if (tmp == 2 || tmp==4 || tmp == 5 || tmp ==7 ||tmp == 9) {
            cout << "hon" << endl;
        } else if (tmp == 0 || tmp ==1 || tmp == 6 || tmp ==8) {
            cout << "pon" << endl;
        } else {
            cout << "bon" << endl;
        }

    } else {
        tmp = n;
        if (tmp == 2 || tmp==4 || tmp == 5 || tmp ==7 ||tmp == 9) {
            cout << "hon" << endl;
        } else if (tmp == 0 || tmp ==1 || tmp == 6 || tmp ==8) {
            cout << "pon" << endl;
        } else {
            cout << "bon" << endl;
        }

    }

}