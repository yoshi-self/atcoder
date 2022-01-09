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
#include <unordered_map>
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
  int x, n;
  cin >> x >> n;
  unordered_map<int, bool> mp;
  int t;
  REP(i, n) {
    cin >> t;
    mp[t] = true;
  }

  if(mp[x] == false) {
    cout << x << endl;
    return 0;
  }

  int i = 1;
  while(true) {
    if(mp[x - i] == false) {
      cout << x - i << endl;
      return 0;
    }
    else if(mp[x + i] == false) {
      cout << x + i << endl;
      return 0;
    }
    i += 1;
  }

  return 0;
}
