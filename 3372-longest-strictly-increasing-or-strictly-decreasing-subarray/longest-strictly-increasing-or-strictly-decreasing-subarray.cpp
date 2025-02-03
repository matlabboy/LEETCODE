class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt = 0;
        int cnt1 = 0;
        int maxii = 0;
        int maxii1 = 0;
        for(int i =1;i<nums.size();i++){
           if(nums[i] > nums[i-1]){
            cnt++;
           }
           else{
            cnt = 0; 
           } 
           maxii = max(maxii,cnt);
        }
         for(int j =0;j<nums.size()-1;j++){
           if(nums[j] > nums[j+1]){
            cnt1++;
           }
           else{
            cnt1 = 0; 
           }
           maxii1 = max(maxii1,cnt1);
        }
        int o = max(maxii+1,maxii1+1);
        return o;
    }
};