class Solution {
public:
    string removeKdigits(string num, int k) {
        //if num.lenght()==k, we can remove all the digits and just return 0
        if (num.length() == k) 
            return "0";

        string ans;
        vector<char> stack;

        for (int i = 0; i < num.length(); i++) {
            //if the stack is not empty and k is greater than 0 and there happens
            // a maxima
          while (k > 0 && !stack.empty() && stack.back() > num[i]) {
            stack.pop_back();
            k--;
          }
          stack.push_back(num[i]);
        }

        while (k > 0){
          stack.pop_back();
            k--;
        }

        for (const char c : stack) {
          if (c == '0' && ans.empty()) 
              continue;
          ans += c;
        }

        return ans.empty() ? "0" : ans;
      }
};