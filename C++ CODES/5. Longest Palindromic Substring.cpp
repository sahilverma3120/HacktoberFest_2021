Given a string s, return the longest palindromic substring in s.
string longestPalindrome(string s) {
        if(s.size()<2)return s;
        int len=s.size();
        for(int m=0;m<len;){
            if(len-m<mxl/2) break;
            int l=m-1,r=m+1;
            while(r<len&&s[r]==s[m])r++;
            m=r;//next diff middle
            while(l>=0&&r<len && s[l]==s[r]){l--,r++;};
            if(r-l-1>mxl){
                mxl=r-l-1,from=l+1;
            }
        }
        return s.substr(from,mxl);
    }
 


