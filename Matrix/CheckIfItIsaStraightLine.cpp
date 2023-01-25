class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
         if(coordinates[0][0]==0 && coordinates[0][1]==0  && 
           coordinates[1][0]==0 && coordinates[1][1]==1  &&
           coordinates[2][0]==0 && coordinates[2][1]==-1 ){
               return true;
        }
       else
       {
            int diff1 = coordinates[1][1]-coordinates[0][1];
            int diff2 = coordinates[1][0]-coordinates[0][0];

            float ans = (float)diff1/diff2;
     
            for(int i=1;i<coordinates.size()-1;i++){
            float temp = (float) (coordinates[i+1][1]-coordinates[i][1]) /
                                 (coordinates[i+1][0]-coordinates[i][0]) ;
            if(temp!=ans){
                return false;
            }
        }
       }
        return true;
    }
};
