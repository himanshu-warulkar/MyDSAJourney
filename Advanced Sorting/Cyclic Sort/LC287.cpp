//Duplicate using cyclic sort
class Solution{
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            int cidx = nums[i];
            if(nums[cidx] == nums[i]) return nums[i];
            else swap(nums[i], nums[cidx]);
        }
        return 69;
    }
};