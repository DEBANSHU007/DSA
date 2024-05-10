class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<float, string>> fraction;
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                float val = float(arr[i]) / arr[j];
                string strval = to_string(arr[i]) + "/" + to_string(arr[j]);
                fraction.push_back({val, strval});
            }
        }
        sort(fraction.begin(), fraction.end());
        string val = "";
        int i = 0;
        while(k != 0){
            val = fraction[i++].second;
            k--;
        }
        int j = 0;
        int first = 0, second = 0;
        while(val[j] != '/'){
            first = first * 10 + val[j] - '0';
            j++;
        }
        j++; 
        int m = val.size();
        while(j < m){
            second = second * 10 + val[j] - '0';
            j++;
        }
        return {first,second};
    }
};