class Solution {
  public:
    int threeSumClosest(vector<int> a, int target) {
        // Your code goes here
    sort(a.begin(), a.end());
    int closest = INT_MAX;
    int ans = 0;
    int n = a.size();
    
    int i = 0;
    while (i < n - 2) {
        int j = i + 1;
        int k = n - 1;
        
        while (j < k) {
            int sum = a[i] + a[j] + a[k];
            
            if (std::abs(sum - target) < closest) {
                closest = abs(sum - target);
                ans = sum;
            } else if (std::abs(sum - target) == closest && sum > ans) {
                ans = sum;
            }
            
            if (sum > target) {
                k--;
            } else {
                j++;
            }
        }
        i++;
    }
    
    return ans;
    }
};