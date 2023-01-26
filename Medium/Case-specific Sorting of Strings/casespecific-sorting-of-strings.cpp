//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        int j=0,k=0;
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                v1.push_back(str[i]);
            }else{
                v2.push_back(str[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        string s2="";
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                s2+=v1[j];
                j++;
            }else{
                s2+=v2[k];
                k++;
            }
        }
        return s2;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends