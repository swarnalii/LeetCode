class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        if(n < 3)
            return false;
        //going up
        while(i+1 < n and arr[i] < arr[i+1])
            i++;
        
        //peak can't be first or last
        if(i == 0 or i == n-1)
            return false;
        
        //coming down
        while(i+1 < n and arr[i] > arr[i+1])
            i++;
        
        return i == n-1; //return true/false based on if we reach the end or not
    }
};