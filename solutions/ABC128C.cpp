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

// join vector<int> to a string with delimiter
std::string join(const std::vector<int> &v, const std::string delim = "") {
  std::string result;
  for(unsigned int i = 0; i < v.size(); ++i) {
    result += std::to_string(v[i]);
    if(i != v.size() - 1) {
      result += delim;
    }
  }
  return result;
}

class Lamp {
  public:
    vector<int> *switches;
    int p;
};

vector<vector<int>> patterns;

void buildPatterns(vector<int> v, int count) {
  //string t = join(v, ", ");
  //cout << t << endl;
  if(count == 0) {
    patterns.push_back(v);
  }
  else {
    vector<int> v1 = v;
    vector<int> v2 = v;
    v1.push_back(1);
    buildPatterns(v1, count - 1);
    v2.push_back(0);
    buildPatterns(v2, count - 1);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<Lamp*> lamps;
  REP(i, m) {
    int k;
    cin >> k;
    vector<int> *switches = new vector<int>;
    //vector<int> = switches(k);
    REP(j, k) {
      int s;
      cin >> s;
      switches->push_back(s);
    }
    Lamp *l = new Lamp();
    l->switches = switches;
    lamps.push_back(l);
  }

  REP(i, m) {
    int p;
    cin >> p;
    lamps[i]->p = p;
  }

  vector<int> v0;
  buildPatterns(v0, n);

  int ans = 0;
  REP(i, patterns.size()) {
    bool ok = true;
    REP(j, lamps.size()) {
      int sum = 0;
      Lamp *lamp = lamps[j];
      REP(k, lamp->switches->size()) {
        int sno = lamp->switches->at(k);
        sum += patterns[i][sno - 1];
      }
      if(sum % 2 != lamps[j]->p) {
        ok = false;
      }
    }
    if(ok) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
