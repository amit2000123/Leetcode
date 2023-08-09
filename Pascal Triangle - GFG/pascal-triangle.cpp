//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:

    int modInverse(int A, int M)
    {
        int m0 = M;
        int y = 0, x = 1;
     
        if (M == 1)
            return 0;
     
        while (A > 1) {
            // q is quotient
            int q = A / M;
            int t = M;
     
            // m is remainder now, process same as
            // Euclid's algo
            M = A % M, A = t;
            t = y;
     
            // Update y and x
            y = x - q * y;
            x = t;
        }
     
        // Make x positive
        if (x < 0)
            x += m0;
     
        return x;
    }
    
    vector<ll> nthRowOfPascalTriangle(int n) {
        long long mod = 1e9+7;
        n = (long long) n;
        vector<long long> temp;
        temp.push_back(1);
        long long ans = 1;
        for(long long i=1;i<n;i++){
            i = i % mod;
            ans = (ans *(n-i)) % mod;
            ans = (ans * modInverse(i,mod)) % mod;
            ans = ans % mod;
            temp.push_back(ans);
        }
        return temp;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends