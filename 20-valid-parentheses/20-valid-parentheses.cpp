// class Solution {
// public:
//     bool isValid(string str) {
//         stack<char> s;
//         for(char c : str){
//             if(c == '(')
//                 s.push(')');
//             else if(c == '[')
//                 s.push(']');
//             else if(c == '{')
//                 s.push('}');
//             else{
//                 if(s.empty() || c != s.top())
//                     return false;
//                 else s.pop();
//             }
//         }
//         return s.size() == 0;
//     }
// };
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char c: str){
            if(c == '(')
                s.push(')');
            else if(c == '[')
                s.push(']');
            else if(c == '{')
                s.push('}');
            else{
                if(s.empty() or (s.top() != c))
                    return false;
                else s.pop();
            }
        }
        return (s.size() == 0);
    }
};