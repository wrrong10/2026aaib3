///week08-3.cpp 54.
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size();
        vector<int> ans;
        int left = 0,right = N-1, up = 0,down = M-1;
        while (ans.size()<M*N){
            int i,j;
            i=up;
            for (int j=left;j<=right;j++){ //往右
                ans.push_back(matrix[i][j]);
            }
            up++;

            j=right;
            for (int i=up;i<=down;i++){ //往下
                ans.push_back(matrix[i][j]);
            }
            right--;

            if(ans.size()== M*N)break;

            i=down;
            for (int j=right;j>=left;j--){ //往左
                ans.push_back(matrix[i][j]);
            }
            down--;

            j=left;
            for (int i=down;i>=up;i--){ //往上
                ans.push_back(matrix[i][j]);
            }
            left++;
        }
        return ans;
    }
};

///week08-3.cpp 54.
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size();
        vector<int> ans;
        int left = 0,right = N-1, up = 0,down = M-1;
        while (ans.size()<M*N){
            int i,j;
            i=up;
            for (int j=left;j<=right;j++){ //往右
                ans.push_back(matrix[i][j]);
            }
            up++;

            j=right;
            for (int i=up;i<=down;i++){ //往下
                ans.push_back(matrix[i][j]);
            }
            right--;

            if(ans.size()== M*N)break;

            i=down;
            for (int j=right;j>=left;j--){ //往左
                ans.push_back(matrix[i][j]);
            }
            down--;

            j=left;
            for (int i=down;i>=up;i--){ //往上
                ans.push_back(matrix[i][j]);
            }
            left++;
        }
        return ans;
    }
};
