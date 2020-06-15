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
  ULL n;
  cin >> n;
  ULL tmp = n;

  map<ULL, ULL> primes;
  for(ULL i = 2; i * i <= n; i++) {
    while(tmp % i == 0) {
      tmp /= i;
      primes[i] += 1;
    }
  }
  if(tmp != 1) {
    primes[tmp] = 1;
  }

  int ans = 0;
  for(auto itr = primes.begin(); itr != primes.end(); itr++) {
    int p = itr->second;
    for(int i = 1; i <= p; i++) {
      if(p >= i) {
        p -= i;
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
