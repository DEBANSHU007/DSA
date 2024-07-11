class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> q; 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                q.push(i);
            } else if (s[i] == ')') {
                int start = q.top();
                q.pop();
                reverse(s.begin() + start + 1, s.begin() + i);
            }
        }
        string result;
        for (char c : s) {
            if (c != '(' && c != ')') {
                result += c;
            }
        }

        return result;
    }
};