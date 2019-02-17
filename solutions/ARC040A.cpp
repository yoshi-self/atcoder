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
  int n;
  scanf(" %d", &n);
  int r = 0;
  int b = 0;
  char c;
  while((c = getchar()) != EOF) {
    if(c == 'R') {
      r++;
    }
    else if(c == 'B') {
      b++;
    }
  }
  string ans = "DRAW";
  if(r > b) {
    ans = "TAKAHASHI";
  }
  else if(r < b) {
    ans = "AOKI";
  }
  
  cout << ans << '\n';
  return 0;
}
