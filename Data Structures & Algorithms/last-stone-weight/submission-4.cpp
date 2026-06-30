class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq(stones.begin(), stones.end());

        while(pq.size()>1){
            int i = pq.top();
            pq.pop();
            int j = pq.top();
            pq.pop();
            if(i > j){
                int k = i-j;
                pq.push(k);
            }
        }
        pq.push(0);
        return pq.top();
    }
};
