// class Solution {
// public:
//     string addBinary(string a, string b) {
        
//     }
// };

class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int end1=a.length()-1; // starting from the right end for both the strings
        int end2=b.length()-1;
        // sum= carry + end1+ end2 , carry can be 0 or 1 , if sum > 1 then carry = 1 else carry=0
        int carry=0;
        while(end1>=0 || end2>=0)
        {
            int sum = carry ;
            if(end1>=0)
            
                sum += a[end1--]-'0'; // subtracting the ascii value 
            
            if(end2>=0)
            
                sum += b[end2--]-'0'; // subtracting the ascii value 
            
            if(sum>1)
                carry=1;
            else
                carry=0;
            
            result += to_string(sum%2); // add 1 if sum is odd else add 0 which is being computed through sum%2
        }
        if(carry)
            result += to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
    
};