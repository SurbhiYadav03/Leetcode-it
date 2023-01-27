class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
       
        for(int i=0;i<r;i++){
                if(matrix[i][0]<=target && matrix[i][c-1]>=target){
                    //binary search
                    int s=0,e=c-1;
                    while(s<=e){
                        int mid=s+(e-s)/2;
                        if(matrix[i][mid]==target){
                            return true;
                        }
                        else if(target<matrix[i][mid]){
                            e=mid-1;
                        }
                        else{
                            s=mid+1;
                        }
                    }
            }
        }
        return false;
    }
};
