class Solution {
public:
    bool isMatch(string s, string p) {
        
        int m = s.size();
        int n = p.size();
        
        bool dp[n+1][m+1];
        
        for(int i = n ; i >= 0 ; i--){
            
            for(int j = m ; j >= 0 ; j--){
                
                if(i == n && j == m)
                    dp[i][j] = true;
                else if(i == n)
                    dp[i][j] = false;
                else if(j == m){
                    
                    dp[i][j] = false;
                    if(p[i] == '*')
                        dp[i][j] = dp[i+1][j];
                    
                }else{
                    
                    if(p[i] == '*')
                        dp[i][j] = dp[i][j+1] || dp[i+1][j];
                    else if(p[i] == '?')
                        dp[i][j] = dp[i+1][j+1];
                    else if(p[i] == s[j])
                        dp[i][j] = dp[i+1][j+1];
                    else
                        dp[i][j] = false;
                    
                }
                
            }
            
        }
        
        return dp[0][0];
    }
};
