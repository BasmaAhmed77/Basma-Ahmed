class Solution {
public:
    bool isValid(string s) {

        stack<char> stack;
        for (auto c : s)
        {
            if (c == ')' || c == ']' || c == '}')
            {
                if ((stack.empty()) || (c - stack.top()) > 3 || (c - stack.top()) < 1)
                    return false;
                stack.pop();
            }
            else stack.push(c);
        }

        return stack.empty();

    }
};