//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    long long maxi = -1e9 , sum = 0 , ansstart = 0 , ansend = -1;
	   // long long s = -1
	    int start; 
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(a[i] < 0){
	           // if(ansstart != -1 && ansend != -1){
	           //     v.begin({ansstart,ansend});
	           // }
	            sum= 0;
	            continue;
	        } 
	        if(sum == 0) start = i;
	            sum += a[i];
    	        if(sum > maxi){
    	            maxi = sum;
    	            ansstart = start;
    	            ansend = i;
    	        }
    	        else if(sum == maxi){
    	            if(i-start > ansend - ansstart){
    	                ansstart = start;
    	                ansend = i;
    	            }
    	           // else if(i-start == ansend - ansstart){
    	           //     if(start < ansstart){
    	           //         ansstart = start;
    	           //         ansend = i;
    	           //     }
    	           // }
    	        }
    	       // if(sum < 0){
    	       //     sum = 0;
    	       // }
	    }
	   // cout<<ansstart <<" "<<ansend<<endl;
	   for(int i= ansstart;i<=ansend;i++) ans.push_back(a[i]);
	    return ans;
	    
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends