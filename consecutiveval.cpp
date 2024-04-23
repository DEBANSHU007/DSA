class Solution {
  public:
    string consecutiveVal(int n, vector<int> &a) {
        // code here
    string s = "";
    unordered_set<int> elements(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        if (elements.count(a[i] + 1) || elements.count(a[i] - 1)) {
            s += '1';
        } else {
            s += '0';
        }
    }
    return s;
    }
};