class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
    string word = "";
    
    for (char c : s) {
        if (c == ' ') {
            if(word.size()!=0)
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(word.size()!=0)
    words.push_back(word); 
    
    string result = "";
    for (int i = words.size()-1; i>0; i--) {
        result += words[i];
        result += " ";
    }
    result+=words[0];
    return result;
    }
};