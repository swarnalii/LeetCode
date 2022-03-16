class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int pushI = 0, popI = 0;
        stack<int> s;
        while(pushI < pushed.size()){
            s.push(pushed[pushI++]);
            while(!s.empty() and s.top() == popped[popI]){
                s.pop();
                popI++;
            }
        }
        return (popI == popped.size());
    }
};