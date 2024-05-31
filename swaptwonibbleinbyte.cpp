class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int a=n;
        return((a&15)<<4|n>>4);
    }
};