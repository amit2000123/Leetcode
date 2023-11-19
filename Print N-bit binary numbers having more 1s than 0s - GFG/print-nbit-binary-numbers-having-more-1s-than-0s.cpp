//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void f(int n , int ones , int zeros , string temp , vector<string> &ans ){
        if(n == 0){
            ans.push_back(temp);
            return;
        }
        
        if(ones == zeros){
            temp.push_back('1');
            f(n-1 , ones+1 , zeros ,temp , ans);
            
        }
        else if(ones > zeros){
            temp.push_back('1');
            f(n-1 , ones+1, zeros , temp , ans );
            temp.pop_back();
            temp.push_back('0');
            f(n-1,ones , zeros+1 , temp , ans);
        }
    }

	vector<string> NBitBinary(int n)
	{
	    vector<string> ans;
	    string temp = "";
	    int ones = 0;
	    int zeros = 0;
	    f(n , ones , zeros , temp , ans);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends