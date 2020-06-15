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
  int x, y;
  cin >> x >> y;

  if(y % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }

  int t = (y - 2 * x) / 2;
  int c = x - t;
  if(t < 0 || c < 0) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
