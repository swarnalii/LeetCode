class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> minHeap;
        for(auto num : nums){
            minHeap.push(num);
            if(minHeap.size() > (nums.size()-k+1))
                minHeap.pop();
        }
        return minHeap.top();
    }
};