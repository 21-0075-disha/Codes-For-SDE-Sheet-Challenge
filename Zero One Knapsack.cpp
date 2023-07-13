// Recursion + Memoization
int solve(int ind, vector<int> &values, vector<int> &weights, int w, vector<vector<int>> &dp) {
	if(ind == 0)
		return weights[0] <= w ? values[0] : 0;
	
	if(dp[ind][w] != -1)
		return dp[ind][w];
	
	int notTake = solve(ind - 1, values, weights, w, dp);

	int take = -1e9;
	if(weights[ind] <= w)
		take = values[ind] + solve(ind - 1, values, weights, w - weights[ind], dp);
	
	return dp[ind][w] = max(take, notTake);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>> dp(n, vector<int> (w + 1, -1));
	return solve(n - 1, values, weights, w, dp);
}
