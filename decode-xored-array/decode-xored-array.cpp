class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> res;
        res.push_back(first);
        for(int i = 0; i < n; i++){
            first = first ^ encoded[i]; // since if a xor b = c, then b xor c = a 
            res.push_back(first);
        }
        return res;
    }
};