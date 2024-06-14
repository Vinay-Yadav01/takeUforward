//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    int mod = 1e9+7;
    long long int solveMem(int n, vector<long long int> &dp){
        if(n==0 || n==1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = (solveMem(n-1,dp)%mod + solveMem(n-2,dp)%mod)%mod;
     }
  public:
    long long int topDown(int n) {
        vector<long long int> dp(n+1,-1);
        return solveMem(n,dp);
    }
    long long int bottomUp(int n) {
        vector<long long int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(long long int i=2;i<=n;i++){
            dp[i] = (dp[i-1]%mod + dp[i-2]%mod)%mod;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends
