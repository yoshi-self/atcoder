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
  cout << n / 2 + (n % 2 ? 1 : 0) << '\n';
  return 0;
}
