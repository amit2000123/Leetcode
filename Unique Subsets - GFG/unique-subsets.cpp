//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    
    void f(int ind , vector<int>&arr , vector<int>&temp , vector<vector<int>> &ans ,set<vector<int>> &s){
        if(ind == arr.size()){
            // sort(temp.begin(),temp.end());
            // if(s.find(temp) == s.end() ){
            //     ans.push_back(temp);
                s.insert(temp);
                return;
            // }
            
        }
        
        
        temp.push_back(arr[ind]);
        f(ind+1 , arr , temp , ans , s);
        temp.pop_back();
        f(ind+1 , arr , temp , ans , s);
        // return;
    }
    
    vector<vector<int> > AllSubsets(vector<int> &arr, int n)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> s;
        sort(arr.begin() , arr.end());
        f(0 , arr , temp ,ans , s);
        for(auto i : s) {
            ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends