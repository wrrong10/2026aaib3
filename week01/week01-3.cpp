//week01-3.cpp 學習計畫 Basic 第3題
// LeetCode 28. Find the index of the First occurence in a String
// 大海撈針 (在一堆稻草裡 找到一隻針)
//寫程式 if for 函式
class Solution {
public:
    int strStr(string haystack, string needle) {
        // 找到字串長度.length() 函式
        int N1 = haystack.length(), N2 = needle.length();
        for (int i=0; i <= N1-N2; i++){
            if ( haystack.substr(i, N2) == needle ) return i;
        }
        return -1;
    }
};
