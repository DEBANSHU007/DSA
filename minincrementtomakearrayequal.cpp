class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 

    int k = arr[0]; 
    int cnt = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= k) { 
            cnt += k - arr[i] + 1; 
            k = arr[i] = k + 1; 
        } else {
            k = arr[i]; 
        }
    }
    return cnt;
    }
};