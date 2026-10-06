class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
           vector<double> ans;

           
    for (int i = 0; i < m; i++) {
        ans.push_back(nums1[i]);
    }

    for (int i = 0; i < n; i++) {
        ans.push_back(nums2[i]);
    }

    
    for (int i = 0; i < ans.size(); i++) {
        int size = ans.size();
        sort(ans.begin(),ans.end());
        
        if (size % 2 == 1) {
    return ans[size / 2];
}else{
 return (ans[size / 2 - 1] + ans[size / 2]) / 2.0;
}

    }


 
  return 0.0; 
    }

};