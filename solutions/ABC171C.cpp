#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <complex>
#include <functional>
#include <utility>
#include <iterator>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i, m, n) for(int i = (m); i < (int)(n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define INF 2000000000

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

//const double PI = 3.1415926535897932384626433832795;

int main() {
  LL n;
  cin >> n;
  int i = 0;
  map<int, char> mp;

  while(n > 0) {
    int x = n % 26;
    char c = (char)(x + 'a' - 1);
    if(c == '`') {
      c = 'z';
      n -=1;
    }
    mp[i] = c;
    n /= 26;
    i += 1;
  }
  int len = i;
  string ans;
  REP(i, len) {
    ans += mp[i];
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
