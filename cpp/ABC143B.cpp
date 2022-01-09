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

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  REP(i, n) {
    cin >> v[i];
  }
  LL ans = 0;
  REP(i, n) {
    FOR(j, i + 1, n) {
      ans += v[i] * v[j];
    }
  }
  cout << ans << '\n';
  return 0;
}
