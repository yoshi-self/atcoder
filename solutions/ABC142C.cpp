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

bool compare_pair(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main() {
  int n;
  vector<pair<int, int>> v;
  cin >> n;

  REP(i, n) {
    int id = i + 1;
    int left;
    cin >> left;
    v.push_back({id, left});
  }

  sort(ALL(v), compare_pair);

  REP(i, n) {
    cout << v[i].first;
    if(i != n - 1) {
      cout << ' ';
    }
  }
  cout << '\n';

  return 0;
}
