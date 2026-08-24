class Solution {
public:
    int majorityElement(vector<int>& nums) {
            unordered_map<int, int> count;
             
             
             for(int i=0;i<nums.size();i++){
                count[nums[i]]++;

             }
             
             int freq=nums.size()/2;
              
              for(auto x:count){
                if(x.second>freq){
                    return x.first;
                }
              }
             return 0;
             
    }
};