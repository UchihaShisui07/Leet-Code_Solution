class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merger = nums1;
    merger.insert(merger.end(), nums2.begin(), nums2.end());
    sort(merger.begin(), merger.end());
    int n= merger.size();
    if(n%2==0){
            return(merger[n/2-1]+merger[n/2])/2.0;  
    }else{
        return merger[n/2];
    }
    }
};