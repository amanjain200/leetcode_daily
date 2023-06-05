/*
1232. Check If It Is a Straight Line
Easy
1.9K
215
Companies
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Example 2:



Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
*/
/*
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if((coordinates[0][0]-coordinates[1][0])==0){
            for(int i=1; i<n; i++){
                if(coordinates[i][0] != coordinates[i-1][0]) return false;
            }
            return true;
        }
        double slope = (((double)coordinates[0][1]-(double)coordinates[1][1])/((double)coordinates[0][0]-(double)coordinates[1][0]));
        
        double y2=coordinates[0][1];
        double x2=coordinates[0][0];

        for(int i=2; i<n; i++){
            if(x2-(double)coordinates[i][0]==0) return false;
            else if((y2-(double)coordinates[i][1])/(x2-(double)coordinates[i][0]) != slope) return false;
        }
        return true;
    }
};

*/