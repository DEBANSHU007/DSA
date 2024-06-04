class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int i = s.length()-1;

        while(i >= 0 && s[i] != '0') {
            s[i] = '0';
            i--;
        }

        if(i < 0) {
            s = '1' + s;
        } else {
            s[i] = '1';
        }
        int index;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                index=i;
                break;
            }
        }
        string k="";
        for(int i=index;i<s.length();i++)
        {
            k=k+s[i];
        }
        return k;
    }
};