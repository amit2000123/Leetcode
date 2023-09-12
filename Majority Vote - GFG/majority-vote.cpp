//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& arr) {
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(ans.size() == 0 || ans[0] != arr[i]){
                int c = 0;
                for(int j=0;j<n;j++){
                    if(arr[i] == arr[j]) c++;
                }
                if(c > n/3) ans.push_back(arr[i]);
                if(ans.size() == 2) break;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size() == 0) return {-1};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends