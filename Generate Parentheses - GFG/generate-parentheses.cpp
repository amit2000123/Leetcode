//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    void f(int open , int close , string temp , vector<string> &ans){
        if(open == 0 && close == 0){
            ans.push_back(temp);
            return;
        }
        
        if(open == close){
            temp.push_back('(');
            f(open-1 , close , temp , ans);
        }
        
        else if(open < close && open != 0){
            temp.push_back('(');
            f(open-1 , close , temp , ans);
            temp.pop_back();
            temp.push_back(')');
            f(open , close-1 , temp , ans);
        }
        
        if(open == 0){
            temp.push_back(')');
            f(open , close-1,temp,ans);
        }
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        string temp = "";
        int open = n;
        int close = n;
        f(open , close , temp , ans);
        return ans;
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends