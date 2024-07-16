class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==ch)
            {
                count--;
            }
            if(count==0)
            {
                break;
            }
        }
        string ans="";
        i++;
        while(i<s.length())
        {
            ans+=s[i];
            i++;
        }
        return ans;
    }
};