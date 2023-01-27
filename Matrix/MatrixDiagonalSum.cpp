class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size()-1;

        int sum=0;
       
        for(int i=0;i<r;i++){
                sum=sum+mat[i][i];
                if(i!=c){
                   sum=sum+mat[i][c];
                }
                c--;
        }
        return sum;
    }
};
