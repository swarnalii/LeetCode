class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<float, int> > v;
        vector<vector<int>> ans;
        int n = points.size();
        
        for(int i = 0; i < n; i++){
            float len = dis(points[i][0], points[i][1]);
            v.push_back({len, i});
        }
        
        sort(v.begin(), v.end());
        
        for(int i = 0 ; i < k; i++){
            int ind = v[i].second;
            ans.push_back({points[ind][0], points[ind][1]});
        }
        
        return ans;
    }
    
    float dis(int p1, int p2){
        return sqrt(p1*p1 + p2*p2);
    }
};

// 7.6, 2        8.9 0