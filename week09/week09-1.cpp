///week09-1a.cpp 1572.
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;
        for(int i=0;i<N;i++){
            ans +=mat[i][i];
        }
        for (int i=0;i<N;i++){
            ans+=mat[N-1-i][i];
        }
        if (N%2==1)ans -=mat[N/2][N/2];
        return ans;
    }
};

///week09-1b.cpp 1572.
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;
        for(int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if (i==j || i+j==N-1) ans +=mat[i][j];
            }
        }
        return ans;
    }
};
