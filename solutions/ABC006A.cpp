#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  string ans;
  if(n % 3 == 0) {
    ans = "YES";
  }
  else {
    ans = "NO";
  }
  cout << ans << '\n';
  return 0;
}
