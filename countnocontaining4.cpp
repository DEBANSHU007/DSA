class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
        int num = i;  
        while (num > 0) {
            int rem = num % 10;
            if (rem == 4) {
                cnt++;
                break;
            }
            num /= 10;  
        }
    }
    return cnt;
    }
};