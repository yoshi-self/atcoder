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

#ifdef LOCAL
  #define dprintf(...) fprintf(stdout, __VA_ARGS__)
#else
  #define dprintf(...) 0
#endif

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

//const double PI = 3.1415926535897932384626433832795;

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
  REP(i, k) {
    int d;
    cin >> d;
    REP(j, d) {
      int s;
      cin >> s;
      mp[s] += 1;
    }
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(mp[i] == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
