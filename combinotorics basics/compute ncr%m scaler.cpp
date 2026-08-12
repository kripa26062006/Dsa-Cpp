#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>, long long> memo;  // Fixed: was "ma<..." 

long long nCr(int n, int r, int m) {
  if(r == 0 || r == n) {
    return 1;
  }
  if(r > n) {
    return 0;
  }
  if(memo.find({n,r}) != memo.end()) {
    return memo[{n,r}];
  }
  long long result = (nCr(n-1, r-1, m) + nCr(n-1, r, m)) % m;
  memo[{n,r}] = result;
  return result;
}

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  cout << nCr(A, B, C) << endl;
  
  return 0;
}