class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        Arrays.sort(intervals,(a,b)-> a[0] - b[0]);
        
        int x1 = intervals[0][0];
        int x2 = intervals[0][1];
        int res = 1;
        
        for (int i=1 ; i < intervals.length; i++){
            if(intervals[i][0] > x1 && intervals[i][1] > x2){
                res++;  // here the interval is added as they are not covering the area
            }
            //updating the interval
            if(intervals[i][1] > x2){
                x1 = intervals[i][0];
                x2 = intervals[i][1];
            }
            
        }
        return res;
    }
}
/*

[1,2],[1,4],[2,6],[3,4]


1 2 3 4 5 6 
( ) 
(     )
  (       )
    ( )    







*/