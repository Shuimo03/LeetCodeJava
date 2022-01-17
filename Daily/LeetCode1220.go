package daily

func countVowelPermutation(n int) int {
	const mod int = 1e9 + 7
	ans := 0
	dp := [5]int{1, 1, 1, 1, 1}
	for i := 1; i < n; i++ {
		dp = [5]int{
			/**
				dp[0] = a
				dp[1] = e
				dp[2] = i
				dp[3] = o
				dp[4] = u
			**/
			(dp[1] + dp[2] + dp[4]) % mod,
			(dp[0] + dp[2]) % mod,
			(dp[1] + dp[3]) % mod,
			dp[2],
			(dp[2] + dp[3]) % mod,
		}
	}

	for _, v := range dp {
		ans = (ans + v) % mod
	}
	return ans
}
