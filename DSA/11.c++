class Solution {
public:
    int maxArea(vector<int>& height) {
       int left=0;
       int right=height.size()-1;
       int max=0;
 while(left<right){
   int  w=right-left;
 int ht=min(height[left],height[right]);
 int area=w*ht;

   if(area > max) {
                max= area;
            }

 if(height[left] < height[right]) {
    left++;
} else {
    right--;
}
 }
     return max;    
    }
   
};