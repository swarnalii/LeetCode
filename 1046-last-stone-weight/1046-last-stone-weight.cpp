class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int, vector<int>> pq(stones.begin(), stones.end());
        while(pq.size() > 1){
            int n1 = pq.top();
            pq.pop();
            int n2 = pq.top();
            pq.pop();
            if(n1 != n2)
                pq.push(n1-n2);
        }
        if(pq.empty())
            return 0;
        else return pq.top();
    }
};