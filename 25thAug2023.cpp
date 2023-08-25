/*
class Solution {
    int dp[101][101][201][3];
    bool func(string &s1, string &s2, string &s3, int ind1, int ind2, int ind3, int m, int n, int turn){
        if(ind3==s3.size()){
            if(abs(n-m)<=1) return true;
            return dp[ind1][ind2][ind3][turn] = false;
        }

        if(dp[ind1][ind2][ind3][turn] != -1) return dp[ind1][ind2][ind3][turn];

        if(ind1<s1.size() && s1[ind1]==s3[ind3]){
            if(turn==2 || turn==0){
                if(func(s1,s2,s3,ind1+1,ind2,ind3+1,m+1,n,1)==true) return dp[ind1][ind2][ind3][turn] = true;
            }else{
                if(func(s1,s2,s3,ind1+1,ind2,ind3+1,m,n,1)==true) return dp[ind1][ind2][ind3][turn] = true;
            }
        }
        if(ind2<s2.size() && s2[ind2]==s3[ind3]){
            if(turn==1 || turn==0){
                if(func(s1,s2,s3,ind1,ind2+1,ind3+1,m,n+1,2)==true) return dp[ind1][ind2][ind3][turn] = true;
            }else{
                if(func(s1,s2,s3,ind1,ind2+1,ind3+1,m,n,2)==true) return dp[ind1][ind2][ind3][turn] = true;
            }
        }

        return dp[ind1][ind2][ind3][turn] = false;

    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp, -1, sizeof(dp));
        if(s1.size()+s2.size() != s3.size()) return false;
        return func(s1,s2,s3,0,0,0,0,0,0);   
    }
};
*/
/*
class Solution {
    int dp[101][101][201][3];
    bool func(string &s1, string &s2, string &s3, int ind1, int ind2, int ind3, int m, int n, int turn){
        if(ind3==s3.size()){
            if(abs(n-m)<=1) return true;
            return dp[ind1][ind2][ind3][turn] = false;
        }

        if(dp[ind1][ind2][ind3][turn] != -1) return dp[ind1][ind2][ind3][turn];

        if(ind1<s1.size() && s1[ind1]==s3[ind3]){
            if(turn==2 || turn==0){
                if(func(s1,s2,s3,ind1+1,ind2,ind3+1,m+1,n,1)==true) return dp[ind1][ind2][ind3][turn] = true;
            }else{
                if(func(s1,s2,s3,ind1+1,ind2,ind3+1,m,n,1)==true) return dp[ind1][ind2][ind3][turn] = true;
            }
        }
        if(ind2<s2.size() && s2[ind2]==s3[ind3]){
            if(turn==1 || turn==0){
                if(func(s1,s2,s3,ind1,ind2+1,ind3+1,m,n+1,2)==true) return dp[ind1][ind2][ind3][turn] = true;
            }else{
                if(func(s1,s2,s3,ind1,ind2+1,ind3+1,m,n,2)==true) return dp[ind1][ind2][ind3][turn] = true;
            }
        }

        return dp[ind1][ind2][ind3][turn] = false;

    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp, -1, sizeof(dp));
        if(s1.size()+s2.size() != s3.size()) return false;
        return func(s1,s2,s3,0,0,0,0,0,0);   
    }
};

*/