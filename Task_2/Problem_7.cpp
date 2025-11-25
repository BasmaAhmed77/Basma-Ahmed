class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        stack.push(s[0]); stack.push(s[1]);
        for (int i = 2; i < s.length();i++)
        {
            if (s[i] == 'c' && (!stack.empty()))
            {
                if (stack.top() == 'b')
                {
                    stack.pop();
                    if (stack.empty()) return false;
                    if (stack.top() != 'a') return false;
                    stack.pop();
                }
                else return false;
            }
            else stack.push(s[i]);
        }

        return stack.empty();

    }
};