// my sol-partially submitted
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = mat.size();
    int m = mat[0].size();
    int i = 0;
    int j = m-1;
    while(i<n && j<m)
    {
        if(mat[i][j]==target)
            return true;
        else if(mat[i][j]>target)
            j--;
        else
            i++;
    }
    return false;
}

// binary search
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
        
    int s = 0;
    int e = (row*col) - 1;
    int mid = s + (e-s)/2;
        
    while(s<=e){
        int element = matrix[mid/col][mid%col];
            
        if(element == target){
            return 1;
        }
        if(element < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}
