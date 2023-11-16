//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    void f(int ind , string s , string temp , vector<string>& ans){
        if(ind == s.size()){
            ans.push_back(temp);
            return;
        }
        
        if(ind == 0){
            temp.push_back(s[ind]);
            f(ind+1 ,s,temp , ans);
            // temp.pop_back();
            // f(ind+1,s,temp , ans);
        }
        
        else{
            temp.push_back(' ');
            temp.push_back(s[ind]);
            f(ind+1 ,s,temp , ans);
            temp.pop_back();
            temp.pop_back();
            temp.push_back(s[ind]);
            f(ind+1,s,temp,ans);
            // f(ind+1,s,temp , ans);
        }
        
    }
    
    vector<string> permutation(string s){
        string temp = "";
        vector<string> ans;
        f(0 , s , temp , ans);
        return ans;
        
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends