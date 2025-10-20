class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        
        while(i<n && j<=m){
            if(nums1[i] < nums2[j]){
                nums1[k] = arr1[i];
                i++;
                k++;
            }
            else{

            }
        }
    }
};