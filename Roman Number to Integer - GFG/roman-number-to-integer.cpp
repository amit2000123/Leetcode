//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> m;
        m['I'] = 1 , m['V'] = 5 , m['X'] = 10 , m['L'] = 50 , m['C'] = 100 , m['D'] = 500 , m['M'] = 1000;
        
        int n = str.size();
        int sum = m[str[n-1]];
        
        for(int i=str.size()-2;i>=0;i--){
            if(  m[str[i]] < m[str[i+1]]  ) sum -= m[str[i]];
            else sum += m[str[i]];
        }
        return sum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends