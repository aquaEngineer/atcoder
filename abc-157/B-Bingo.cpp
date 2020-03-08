#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
 
int main() {
	int a [3][3];
	int b [3][3];
	int bingo =0;
	for (int i = 0; i<3; i++) {
		for (int j = 0; j <3; j++) {
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	int n;
	cin >> n;
	int c;
	for (int k = 0; k <n; k++) {
		cin >> c;

		for (int i = 0; i<3; i++) {
			for (int j = 0; j <3; j++) {
				if (a[i][j] == c) {
					b[i][j] = 1;
				}
			}
		}
	}

	for (int i = 0; i<3; i++) {
		if (b[i][0] == 1 && b[i][1] == 1 && b[i][2] == 1) {
			bingo = 1;
		}
		if (b[0][i] == 1 && b[1][i] == 1 && b[2][i] == 1) {
			bingo = 1;
		}
	}
	if (b[0][0] == 1 && b[1][1] == 1 && b[2][2] == 1) {
		bingo = 1;
	}
	if (b[0][2] == 1 && b[1][1] == 1 && b[2][0] == 1) {
		bingo = 1;
	}

	if (bingo == 1) {
		cout << "Yes";
	} else {
		cout << "No";
	}


}
