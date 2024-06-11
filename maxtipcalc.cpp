class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &a, vector<int> &b) {
        // code here
    vector<pair<int, int>> diff;

    for (int i = 0; i < n; i++)
    {
        diff.push_back({abs(a[i] - b[i]), i});
    }

    sort(diff.rbegin(), diff.rend());

    long long totalTip = 0;

    for (auto it : diff)
    {
        int index = it.second;

        if (x == 0)
        {
            totalTip += b[index];
            y--;
        }
        else if (y == 0)
        {
            totalTip += a[index];
            x--;
        }
        else
        {
            if (a[index] > b[index])
            {
                totalTip += a[index];
                x--;
            }
            else
            {
                totalTip += b[index];
                y--;
            }
        }
    }

    return totalTip;
    }
};