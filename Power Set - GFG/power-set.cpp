//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    
	    void f(int ind , string s , string temp , vector<string> &ans){
	        if(ind == s.size()){
	            if(temp == "") return;
	            ans.push_back(temp);
	            return;
	        }
	        
	        temp.push_back(s[ind]);
	        f(ind+1 , s , temp , ans);
	        temp.pop_back();
	        f(ind+1 , s , temp , ans);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    int n = s.size();
		    vector<string> ans;
		    string temp = "";
		    f(0  , s  , temp, ans);
		    sort(ans.begin() , ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends