class Solution {
public:
    string freqAlphabets(string s) {
        string res="";
        for(int i=0;i<s.length();) {
            if(i+2<s.length() && s[i+2]=='#') {
                int ss=(s[i]-'0')*10+(s[i+1]-'0');
                res+=char(ss+'a'-1);
                i+=3;
            }
            else {
                res+=char(s[i]-'0'-1+'a');
                i++;
            }
        }
        return res;
    }
};
