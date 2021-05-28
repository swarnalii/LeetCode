class Solution {
public:
    int reverse(int x) {
        long long sign=0,num=0;
        if(x<0){
            sign=1;
            x=abs(x);
        }
        while(x>0){
            num*=10;
            num+=x%10;
            x=x/10;
        }
        if(sign==1){
            num=-num;
        }
        if(num>INT_MAX||num<INT_MIN){
            return 0;
        }
        return num;
    }
};

/**class Solution {
public:
    int reverse(int x) {
        int num=0;
        while(x){
            num*=10;
            num+=x%10;
            x=x/10;
        }
        if(num>INT_MAX||num<INT_MIN){
            return 0;
        }
        return num;
    }
};**/
    
/**class Solution {
public:
    int reverse(int x) {
       long long rev = 0;
        while(x) {
            rev = rev*10 + x%10;
            x /= 10;
        }
        return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;

    }
};**/