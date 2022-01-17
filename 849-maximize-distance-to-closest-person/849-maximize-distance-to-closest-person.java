class Solution {
     public int maxDistToClosest(int[] seats) {
        if (seats == null || seats.length == 0) {
            return 0;
        }
        int prev = -1;
        int max = 0;
        for (int i = 0; i < seats.length; i++) {
            if (seats[i] == 1) {
                if (prev == -1) {
                    max = i;
                } else {
                    max = Math.max(max, (i - prev) / 2);
                }
                prev = i;
            }
        }
        max = Math.max(max, seats.length - 1 - prev);
        return max;
    }
}