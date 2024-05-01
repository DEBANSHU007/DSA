class Solution {
public:
    string reversePrefix(string word, char ch) {
        int k=-1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                k=i;
                break;
            }
        }
        int i=0;
        int j=k;
        while(i<=j)
        {
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};