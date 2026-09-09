class Solution {
public:
    int countCommas(int n) {
        int v=0;
        for(int i=1000;i<=n;i++){
            v++;
        }
        return v;
    }
};