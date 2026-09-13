class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         int sum=0;
          int count=0;
         
            
        for(int j=0;j<k;j++){
         sum=sum+arr[j];
        }


      if(sum/k>=threshold){
        count++;
      }

         int i=0;
    
    int j=k;

 while(j<arr.size()){
      sum=sum+arr[j];
      sum=sum-arr[i];
      i++;
      j++;

       if(sum / k >= threshold) {
                count++;
            }

 }

return count;

    }
};