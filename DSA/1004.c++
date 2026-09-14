class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxx=INT_MIN;
        int zero=0;
        int j=0;
         for(int i=0;i<nums.size();i++){
            
             if(nums[i]==0){
             zero++;
             }
              

          while(zero>k){

              if(nums[j] == 0) {
                    zero--;
                }

                j++;

              }

                 maxx = max(maxx, i - j + 1);


         }

         return maxx;
    }
};