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

class R {
  public:
    int num;
    string city;
    int score;
};

bool cmp_city(const R *lhs, const R *rhs) {
  return lhs->city < rhs->city;
}

bool cmp_score(const R *lhs, const R *rhs) {
  return lhs->score < rhs->score;
}

int main() {
  int n;
  cin >> n;
  vector<R*> v(n);
  REP(i, n) {
    string s;
    int p;
    cin >> s >> p;
    R *r = new R();
    r->num = i + 1;
    r->city = s;
    r->score = p;
    v[i] = r;
  }

  sort(v.rbegin(), v.rend(), cmp_score);
  stable_sort(v.begin(), v.end(), cmp_city);

  REP(i, n) {
    cout << v[i]->num << endl;
  }

  return 0;
}
