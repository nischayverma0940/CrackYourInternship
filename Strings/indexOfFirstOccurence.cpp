class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int m = i;
                int n = 0;
                while(m < haystack.length() && n < needle.length()){
                    if(haystack[m] == needle[n]){
                        m++;
                        n++;
                    } else{
                        break;
                    }
                    if(n == needle.length()) return i;
                }
            }
        }
        return -1;
    }
};
//Leetcode 28
