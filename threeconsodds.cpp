class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int f=0;
        for(int i=0;i+2<arr.size();i++)
        {
            if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};