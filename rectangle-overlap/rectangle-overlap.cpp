class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // checking if the coordinates of bottom-left and top-right
        // can form a valid rectangle
        int x1 = rec1[0], y1 = rec1[1], x2 = rec1[2], y2 = rec1[3];
        int X1 = rec2[0], Y1 = rec2[1], X2 = rec2[2], Y2 = rec2[3];
        int xbottom = max(x1, X1);
        int ybottom = max(y1, Y1);
        int xtop = min(x2, X2);
        int ytop = min(y2, Y2);
        if(xbottom < xtop and ybottom < ytop)
            return true;
        return false;
    }
};