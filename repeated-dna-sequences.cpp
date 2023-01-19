#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
  string subString;
  unordered_map<string, bool> umap;
  vector<string> result;

  if (s.length() <= 10) {
    return result;
  }

  for (int i = 0; i < s.length() - 9; i++) {
    subString = s.substr(i, 10);
    cout << "subString: " << subString << "\n";

    if (umap.count(subString)) {
      // substring is present in the set
      // cout << "found " << subString << "\n";
      if (umap[subString] == false) {
        umap[subString] = true;
        result.push_back(subString);
      }
    }
    // umap[subString] = false;
    umap.insert(make_pair(subString, false));
  }

  return result;
}

void printv(vector<string> stringVector) {
  cout << "PRINTING...\n";
  for (auto sv : stringVector) {
    cout << sv << " ";
  }
  cout << "\n";
}

int main(int argc, char const *argv[]) {
  // string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"; // Output: ["AAAAACCCCC","CCCCCAAAAA"]
  // string s = "AAAAAAAAAAAAA"; // ["AAAAAAAAAA"]
  // string s = "A";
  // string s = "AAAAAAAAAAA";
  string s = "AAAAAAAAAA";

  printv(findRepeatedDnaSequences(s));
  // cout << findRepeatedDnaSequences(s) << "\n";
  return 0;
}
