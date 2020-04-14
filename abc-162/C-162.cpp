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
 
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main() {
	int n;
	int tmp;
	int tmp2;
	cin >> n;
	ll sum = 0;
	for (int i=1;i <=n;i++) {
		for (int j= 1 ; j<=n ;j++) {
			for (int k= 1 ; k<=n ;k++) {
				tmp = gcd(i,j);
				tmp2 = gcd(tmp,k);
			sum+= tmp2;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

