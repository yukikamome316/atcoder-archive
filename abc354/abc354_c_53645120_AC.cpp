/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53645120
 * Submitted at: 2024-05-19 00:49:34
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_c
 * Result: AC
 * Execution Time: 151 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

class Card {
public:
  int strength, cost, idx;
  Card(int strength, int cost, int idx) : strength(strength), cost(cost), idx(idx) {}
};

bool compareByCost(const Card& a, const Card& b) {
  return a.cost < b.cost;
}

int main() {
  int n;
  cin >> n;
  vector<Card> cards;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    cards.push_back(Card(a, b, i + 1));
  }

  sort(cards.begin(), cards.end(), compareByCost);

  set<int> ans;

  int max_strength = 0;
  rep(i, n) {
    if (cards[i].strength > max_strength) {
      max_strength = cards[i].strength;
      ans.insert(cards[i].idx);
    }
  }

  cout << ans.size() << endl;

  for (auto idx : ans) {
    cout << idx << " ";
  }

  cout << endl;

  return 0;
}
