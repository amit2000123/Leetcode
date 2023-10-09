//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    unordered_map<char , int> m;
    int n = s.size();
    int i = 0 , j = 0;
    int maxi = 0;
    while(j < n){
        m[s[j]]++;
        
        if(m.size() == j - i + 1){
            maxi = max( maxi , j - i + 1);
            j++;
        }
        
        else if(m.size() < j - i + 1){
            while(m.size() < j - i + 1){
                m[s[i]]--;
                if(m[s[i]] == 0) m.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    
    return maxi;
}