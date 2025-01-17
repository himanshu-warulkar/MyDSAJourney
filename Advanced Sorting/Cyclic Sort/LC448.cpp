class Solution{
public:
    vector<int> findDissapperedNumbers (vector<int>& nums){
        int n = nums.size();
        int i = 0;
        while(i<n){
            int cidx = nums[i]-1;
            if(nums[cidx] == nums[i]) i++; 
            else (swap(nums[i], nums[cidx]);
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1) ans.push_back(i+1);
        }
        return ans;
    }
};