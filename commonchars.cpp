class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>maxfreq(26,INT_MAX);
        for(auto &ch:words)
        {
            vector<int>freq(26,0);
            for(int i=0;i<ch.size();i++)
            {
                freq[ch[i]-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                maxfreq[i]=min(maxfreq[i],freq[i]);
            }
        }
        vector<string>result;
        for(int i=0;i<26;i++)
        {
            while(maxfreq[i]>0)
            {
               result.push_back(string(1, i + 'a'));
               maxfreq[i]--;
            }
        }
        return result;
    }
};