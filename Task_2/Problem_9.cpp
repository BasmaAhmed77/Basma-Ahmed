class Solution {
public:
    int scoreOfParentheses(string s) {
        int ansA = 1, ansB = 0;
        stack<char> stack;
        stack.push(s[0]);
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i] == ')' && s[i + 1] == s[i])
            {
                ansA *= 2;
                stack.pop();
            }
            else if (s[i] == '(') stack.push(s[i]);
            else
            {
                ansB++;
                stack.pop();
            }
        }
        if (ansA > 1 && ansB > 0) return ansA + ansB + 1;
        return ansA + ansB;
    }
};