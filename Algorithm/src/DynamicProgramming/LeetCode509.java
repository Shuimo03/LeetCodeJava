package DynamicProgramming;

public class LeetCode509 {

    public int fib(int n) {

        int dp[] = new int[n+2];
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
}