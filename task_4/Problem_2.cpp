class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int mx1, mx2;
        mx1 = *max_element(arr.begin(), arr.end());
        arr.erase(max_element(arr.begin(), arr.end()));
        mx2 = *max_element(arr.begin(), arr.end());

        while (mx1 == mx2 && !arr.empty())
        {
            arr.erase(max_element(arr.begin(), arr.end()));
            mx2 = *max_element(arr.begin(), arr.end());
        }
        if (arr.empty())
            return -1;
        else
            return mx2;
    }
};