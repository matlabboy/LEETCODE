class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> haahh;
        for(int i = 0;i<nums.size();i++){
            haahh[nums[i]]++;
        }
        for(auto x:haahh){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};