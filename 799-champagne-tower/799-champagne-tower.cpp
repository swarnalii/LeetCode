class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> each_bowl(102,vector<double>(102)); // 100 rows and exh row has an array which are columns
        
        each_bowl[0][0] = poured ; //whatever poured will initially fall here
        
        // loop through each row and each colum
        for(int i=0;i<query_row;i++)
        {
            for(int j=0;j<=i;j++)
            {
                double flow= (each_bowl[i][j]-1)/2.0; //thi is what flows out to one bowl from onr
                
                if(flow>0) 
                {
                    each_bowl[i+1][j]+=flow; //just follow the 1st and secnd row
                    each_bowl[i+1][j+1]+=flow;
                } 
                
            }
        }
        return min((double)1,each_bowl[query_row][query_glass]); // bcoz 1 is the maximum which can flow

    }
};