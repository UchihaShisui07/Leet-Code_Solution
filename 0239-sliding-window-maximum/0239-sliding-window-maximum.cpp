class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> output;
        deque<int> vc;
        for(int i=0;i<nums.size();i++){
            if(!vc.empty() && vc.front()<=i-k){
                vc.pop_front();
            }
             while (!vc.empty() && nums[vc.back()] < nums[i]) {
                vc.pop_back();
            }
            vc.push_back(i);
            if (i >= k - 1) {
                output.push_back(nums[vc.front()]);
            }
        }
        return output;
        }
};