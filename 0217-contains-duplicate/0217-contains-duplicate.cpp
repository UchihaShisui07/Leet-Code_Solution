class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int v = nums.size();
        int x=0;
        for(int i=0;i<v-1;i++){
        if(nums[i]==nums[i+1]) {
            x++;
        }
        }
     if(x>=1)return true;
     else{
        return false;
     }}
};