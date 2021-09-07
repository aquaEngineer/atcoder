#include <bits/stdc++.h> 
using namespace std;

int main() {
  long long a,b;
  char op;
  vector <long long> answer;
  while (1) {
    cin >> a >> op >> b;
    if (op == '+') {
      answer.push_back(a+b);
    } else if (op == '-') {
      answer.push_back(a-b);
    } else if (op == '/') {
      answer.push_back(a/b);
    } else if (op == '*') {
      answer.push_back(a*b);
    } else {
      break;
    }
  }
  for(int i =0; i< answer.size(); i++) {
    cout << answer[i] << endl;
  }
}