class Solution{
public:
    vector<int> findDissapperedNumbers (vector<int>& nums){
        int n = a.size();
        for(int i=0; i<n; i++){
            while(a[i] != a[a[i]-1]){
                swap(a[i], a[a[i]-1]);
            }
            vector<int>answer;

            for(int i=0; i<n; i++){
                if(a[i] != i+1) answer.push(a[i]);
            }
            return answer;
        }
    }
};