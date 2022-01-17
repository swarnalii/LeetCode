class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int lastind = -1, ans = 0;
        int n = seats.size();
        for(int i = 0; i < n; i++){
            if(seats[i] == 1){
                if(lastind == -1)
                    ans = i;
                else ans = max(ans, (i - lastind)/2);
                lastind = i;
            }
        }
        return max(ans, n-1-lastind);
    }
};

