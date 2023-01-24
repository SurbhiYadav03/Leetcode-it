class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //declaring vector with a given size
        vector<vector<int>>ans(r,vector<int>(c));
        
        int m=mat.size();     //no. of rows
        int n=mat[0].size();  //no. of cols
        
        int ansR=0,ansC=0;
        
        //reshape only if
        if(m*n == r*c)
        {
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                ans[ansR][ansC]=mat[i][j];
                ansC++;

                if(ansC==c){
                    ansR++;
                    ansC=0;
                }
            }
            }
            return ans;
        }
        
        else
            return mat;
    }
};
