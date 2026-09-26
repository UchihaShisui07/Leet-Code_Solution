class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>ans;
        int insertpos=0;
        for(int i=00;i<nums.size();i++){
           if(nums[i]!=0){
            swap(nums[i],nums[insertpos]);
            insertpos++;
        }
    }
    }
};