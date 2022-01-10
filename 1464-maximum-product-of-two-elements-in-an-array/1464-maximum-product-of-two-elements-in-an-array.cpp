class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(auto num : nums){
            minHeap.push(num-1);
            if(minHeap.size() > 2)
                minHeap.pop();
        }
        int ans = minHeap.top();
        minHeap.pop();
        ans *= minHeap.top();
        return ans;
    }
};