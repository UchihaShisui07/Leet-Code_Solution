class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // int idle=0;

        unordered_map<char, int> counts;
        for(char task: tasks){
            counts[task]++;
        }

        priority_queue<int>pq;
        for(auto& pair: counts){
            pq.push(pair.second);
        }
        int total_time=0;

        while(!pq.empty()){
            vector<int> remaining_tasks;
            int cycle = n+1;
            int tasks_done=0;

            for(int i=0;i<cycle;i++){
                if(!pq.empty()){
                    remaining_tasks.push_back(pq.top()-1);
                    pq.pop();
                    tasks_done++;
                }
            }

            for(int count: remaining_tasks){
                if(count>0){
                    pq.push(count);
                }
            }

            if(pq.empty()){
                total_time+=tasks_done;
            }
            else{
                total_time+=cycle;
            }
        }
        return total_time;
    }
};