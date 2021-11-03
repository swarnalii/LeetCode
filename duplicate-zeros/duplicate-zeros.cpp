class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        int cnt = 0;  
        for(int i = 0; i < len; i++){
            if(arr[i] == 0)
                cnt++;
        }
        
        int inc_len = len + cnt - 1;
        for(int i = len - 1, j = inc_len; i>=0 and j>=0; i--, j--){
            if(arr[i] != 0){
                if(j < len) 
                    arr[j] = arr[i];
            }
            else{
                if(j < len) 
                    arr[j] = arr[i];
                j--;
                if(j < len) 
                    arr[j] = arr[i];
            }
        }
    }
};