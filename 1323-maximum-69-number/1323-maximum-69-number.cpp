class Solution {
public:
    int maximum69Number (int num) {
        // will check position of the first 6
        int n = num, pos = -1, i = 0;
        while(n > 0){
            int rem = n%10;
            if(rem == 6)
                pos = i;
            n /= 10;
            i++;
        }
        cout<<pos<<endl;
        if(pos >= 0){
           return (num + 3*pow(10, pos)); // adding 3 followed by 0 to convert 6 to 9
        }
        else return num;
    }
};