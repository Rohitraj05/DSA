class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        for(int i=0;i<prices.size();i++){
            int current=prices[i];
           for(int j=i+1;j<prices.size();j++){
               if(prices[i]>=prices[j]){
                  current=prices[i]-prices[j];
              
                  break;
               }
           }
             answer.push_back(current);
        }
            
return answer;
        }
};