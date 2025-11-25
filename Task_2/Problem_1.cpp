class Solution {
public:
    bool backspaceCompare(string s, string t) {


        bool isEqual = false;
        string s2, t2;
        for (int i = 0;i < s.length();i++)
        {
            if ((!s2.empty()) && s[i] == '#')
            {
                s2.pop_back();
            }
            else if (s[i] != '#') s2 += s[i];
        }
        for (int i = 0;i < t.length();i++)
        {
            if ((!t2.empty()) && t[i] == '#')
            {
                t2.pop_back();
            }
            else if (t[i] != '#') t2 += t[i];
        }
        if (s2 == t2) isEqual = true;
        return isEqual;
    }
};