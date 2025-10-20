/*Given an array nums with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue.*/

//TWO PASS
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int noz = 0;
        int noo = 0;
        int now = 0;
    
        for(int i=0; i<n; i++){
            if(nums[i] == 0) noz++;
            else if(nums[i] == 1) noo++;
            else now++;
        }

        for(int i=0; i<n; i++){
            if(i<noz) nums[i] = 0;
            else if(i<(noz+now)) nums[i] = 1;
            else nums[i] = 2;
        }
        return;
    }
};

//THREE POINTER DUTCH ALGORITHM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int mid = 0;
        int hi = n-1;

        while(mid <= hi){
            if(nums[mid] == 2){
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            }
            else if(nums[mid] == 0){
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
            else mid++;
        }

        return;
    }
};