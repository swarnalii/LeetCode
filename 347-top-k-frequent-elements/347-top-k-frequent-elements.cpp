class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        
        // using min-heap: min elements at the top
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto i: m){
            minHeap.push({i.second, i.first});
            while(minHeap.size() > k)
                minHeap.pop();
        }
        
        vector<int> res;
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return res;
    }
};