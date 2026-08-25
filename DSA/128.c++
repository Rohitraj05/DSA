class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0) {
            return 0;
        }

        vector<int> ans = nums;
        sort(ans.begin(), ans.end());

        int current = 1;
        int longest = 1;

        for(int i = 1; i < ans.size(); i++) {
 
            if(ans[i] == ans[i - 1] + 1) {
                current++;
            }
 
            else if(ans[i] == ans[i - 1]) {
                continue;
            }

             
            else {
                current = 1;
            }

            longest = max(longest, current);
        }

        return longest;
    }
};