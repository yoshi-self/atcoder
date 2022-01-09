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
#include <deque>
#include <numeric>

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
  int n, k;
  scanf(" %d %d", &n, &k);
  deque<int> d;
  int t;
  int total3 = 0;
  REP(i, 2) {
    scanf(" %d", &t);
    d.push_back(t);
    total3 += t;
  }

  int day = 3;
  bool enough = true;
  REP(i, n - 2) {
    scanf(" %d", &t);
    d.push_back(t);
    total3 += t;
    if(total3 < k) {
      enough = false;
      break;
    }
    total3 -= d.front();
    d.pop_front();
    day++;
  }
  
  if(enough) {
    cout << -1 << '\n';
  }
  else {
    cout << day << '\n';
  }

  return 0;
}
