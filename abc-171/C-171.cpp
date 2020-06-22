
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
 
char change (int);
int main() {
    ll n;
    cin >> n;
    string a = "";
    while (n) {
        n--;
        a += change(n%26);
        n /= 26;
    
    }
    reverse(a.begin(), a.end());
    cout << a << endl;
}

char change (int a) {
    if (a == 0) return 'a';
    else if (a == 1) return 'b';
    else if (a == 2) return 'c';
    else if (a == 3) return 'd';
    else if (a == 4) return 'e';
    else if (a == 5) return 'f';
    else if (a == 6) return 'g';
    else if (a == 7) return 'h';
    else if (a == 8) return 'i';
    else if (a == 9) return 'j';
    else if (a == 10) return 'k';
    else if (a == 11) return 'l';
    else if (a == 12) return 'm';
    else if (a == 13) return 'n';
    else if (a == 14) return 'o';
    else if (a == 15) return 'p';
    else if (a == 16) return 'q';
    else if (a == 17) return 'r';
    else if (a == 18) return 's';
    else if (a == 19) return 't';
    else if (a == 20) return 'u';
    else if (a == 21) return 'v';
    else if (a == 22) return 'w';
    else if (a == 23) return 'x';
    else if (a == 24) return 'y';
    else if (a == 25) return 'z';
    else return ' ';
}