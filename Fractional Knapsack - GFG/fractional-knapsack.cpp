//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    // static bool cmp(pair<int,int>&i ,pair<int,int>&j){
    //     return (double)i.first/(double)i.second > (double)j.first/(double)j.second;
    // }
    static bool cmp(Item i , Item j ){
        return (double)i.value/(double)i.weight > (double)j.value/(double)j.weight;
    }
    
    double fractionalKnapsack(int w, Item v[], int n)
    {
        // vector<pair<int,int>>v(n);
        // for(int i=0;i<n;i++){
        //     v[i].first = arr[i].value;
        //     v[i].second = arr[i].weight;
        // }
        sort(v,v+n,cmp);
        double totalValue =0 , currWeight = 0;
        
        for(int i=0;i<n;i++){
            if(currWeight + v[i].weight <= w ){
                currWeight += v[i].weight;
                totalValue += v[i].value;
            }
            
            else{
                int remWeight = w - currWeight;
                totalValue += ((double)remWeight / (double)v[i].weight) * (double)v[i].value;
                break;
            }
        }
        return totalValue;
    }

        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends