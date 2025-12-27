CodeForces (Desorting - 800 Rated CP 31 Sheet );
// To make array not sorted;
We can use C++ STL to know whether the array is sorted or not
is_sorted(begin(array),end(array));

Intituion:We need to find a Minimum no. of Operation to make these array not sorted;
approach - 
  a. We are going to find Min_Difference between elements.
  b. ans = (min_difference/2)+1;
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//1st approach:
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    vector<long long> array(n);
	    for(int i=0;i<n;i++){
	        cin>>array[i];
	    }
	    if(!is_sorted(begin(array),end(array))){
	        cout<<0<<endl;
	        continue;
	    }
	    long long min_difference = INT_MAX;
	    long long operation = 0;
	    bool found  = false;
	    for(int i=0;i<n-1;i++){
	        long long difference = array[i+1]-array[i];
	        min_difference = min(min_difference,difference);
	    }
	    cout<<(min_difference/2)+1<<endl;
	}
	return 0;
}
