#include<stdio.h>
int climbStairs(int n){
    int dp[n+1];
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main(){
   int n=4;
   int climb=climbStairs(n);
   printf("%d",climb);
   return 0; 
}