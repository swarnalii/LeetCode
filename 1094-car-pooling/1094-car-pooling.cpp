class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int, int>> timestamp;
        for(int i = 0; i < trips.size(); i++){
            timestamp.push_back({trips[i][1], trips[i][0]});
            timestamp.push_back({trips[i][2], -trips[i][0]});
        }
        
        sort(timestamp.begin(), timestamp.end());
        
        int occupied = 0;
        for(int i = 0; i < timestamp.size(); i++){
            occupied += timestamp[i].second;
            if(occupied > capacity) return false;
        }
        
        return true;
    }
};

