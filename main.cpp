#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();


void test1() {
  int tests;
  int n;
  int x;
  int xp;
  int a;
  int total;
  cin >> tests;
  stringstream ss;
  stringstream os;
  string large;
  for (int i = 0; i < tests; i++) {
    cin >> n;
    cin >> x;
    xp = 1;
    total = 0;
    getline(cin, large);
    getline(cin, large);
    ss.str(large);
    // PV1(ss.str());
    for (int p = 0; p < n; p++) {
      ss >> a;
      total += a * xp;
      total %= 10000;
      // PV4(p, a, xp, total);
      xp *= x;
      xp %= 10000;
    }
    if (total < 0)
      total = -total;
    // cout << "T: " << total << endl;
    total %= 10000;
    if (total < 1000) os << 0;
    if (total < 100) os << 0;
    if (total < 10) os << 0;
    os << total << endl;
  }
  cout << os.str();
}

void test2() {}

void test3() {}