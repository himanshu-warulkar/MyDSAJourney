//method1: brute force
class Solution{
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        vector<bool> check(n+1, false);
        for(int i=0; i<=n; i++){
            int ele = nums[i];
            check[ele] = true;
        }
        for(int i=0; i<=n; i++){
            if(check[i] == false) return 1;
        }
        return 69;
    }
};

//method2: cycle sort
class Solution{
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int i = 0;
        while(i<n){
            int cidx = nums[i];
            if(cidx == i || cidx == n) i++;
            else swap(nums[i], nums[cidx]);
        }
        for(int i=0; i<n; i++){
            if(nums[i] != i) return i;
        }
        return n;
    }
};


//method3: maths
class Solution{
public:
    int actualSum = n(n+1)/2;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }
    return actualSum - sum;
};