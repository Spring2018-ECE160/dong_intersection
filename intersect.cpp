#include <iostream>
#include <map>
#include <set>
#include <vector>

void printSet(const std::set<int> &s) {
  for (int i : s) {
    std::cout << i << std::endl;
  }
}

int main() {
  std::vector<std::set<int>> sets = {{1, 2, 3, 4}, {2, 4}, {1, 2, 3, 4, 5, 8}};
  int num_sets = sets.size();

  std::map<int, int> count;
  for (auto s : sets) {
    for (int i : s) {
      count[i]++;
    }
  }

  std::set<int> sol;
  for (auto it = count.begin(); it != count.end(); ++it) {
    if (it->second == num_sets) {
      sol.emplace(it->first);
    }
  }

  printSet(sol);
  return 0;
}
