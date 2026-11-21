class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int end = m*n - 1;
        int start = 0;

        while(start <= end){
            int mid = start + (end - start) / 2;
            int row = mid / n;
            int col = mid % n;
            int element = matrix[row][col];


            if(element == target){
                return true;
            }
            else if(element < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
    }
};
