//week10-1a.cpp 1523.
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for (int i=low; i<=high; i++){
            if (i%2==1)ans++;
        }
        return ans;
    }
};

//week10-1b.cpp 1523.
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2;
        if (low%2==1 || high%2==1) ans++;
        return ans;
    }
};
