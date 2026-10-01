class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      vector<pair<int, int>> V;
        int x=score.size();
        for(int i=0;i<x;i++){
            V.push_back({score[i],i});
        }

        sort(V.rbegin(), V.rend());

vector<string> vansh(x);
for(int i=0;i<x;i++){
    int O_I = V[i].second;
    if(i==0){
        vansh[O_I]="Gold Medal";
    }else if(i==1){
        vansh[O_I]="Silver Medal";
    }else if(i==2){
        vansh[O_I]="Bronze Medal";
    }else{
        vansh[O_I]=to_string(i+1);
    }
    
}
return vansh;
    }
};