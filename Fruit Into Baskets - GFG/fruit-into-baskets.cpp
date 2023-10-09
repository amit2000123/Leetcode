//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int n, vector<int> &s) {
        int i = 0;
        int j = 0;
        unordered_map<int ,int> m;
        int maxi = 0 ;
        
        while( j < n ){
            m[s[j]]++;
            
            if(m.size() <= 2){
                maxi = max( maxi , j - i + 1 );
                j++;
            }
            
            else if(m.size() > 2){
                while(m.size() > 2){
                    m[s[i]]--;
                    if(m[s[i]] == 0) m.erase(s[i]);
                    i++;
                }
                
                j++;
            }
            
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends