class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int firstCnt = 0, lastCnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                firstCnt++;
            else {
                lastCnt = max(firstCnt, lastCnt);
                firstCnt = 0;
            }
        }
        lastCnt = max(firstCnt, lastCnt);
        return lastCnt;
    }
};