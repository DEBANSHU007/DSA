class Solution {
  public:
    bool checkPrime(int x) {
    
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

  vector<int> getPrimes(int n) {
    vector<int> res;
    for (int i = 2; i <= n / 2; i++) {
        if (checkPrime(i) && checkPrime(n - i)) {
            res.push_back(i);
            res.push_back(n - i);
            return res;
        }
    }
    res.push_back(-1);
    res.push_back(-1);
    return res;
}
};