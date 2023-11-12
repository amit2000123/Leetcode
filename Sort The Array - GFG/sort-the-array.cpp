//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    
    // void insert(vector<int> &arr , int temp ){
    //     if(arr.size() == 0 || arr.back() <= temp){
    //         arr.push_back(temp);
    //         return;
    //     }
        
    //     else{
    //         int val = arr.back();
    //         arr.pop_back();
    //         insert(arr , temp);
    //         arr.push_back(val);
    //     }
    // }
    
    // void sort(vector<int> &arr){
    //     if(arr.size() == 1) return;
        
    //     int temp = arr.back();
    //     arr.pop_back();
    //     sort(arr);
    //     insert(arr , temp);
    // }
    
    vector<int> sortArr(vector<int>arr, int n){
        // sort(arr);
        // return arr;
        sort(arr.begin() , arr.end());
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends