
#include <bits/stdc++.h>
using namespace std;

// Function to solve the 0/1 Knapsack problem using dynamic programming
int knapsack(vector<int>& wt, vector<int>& val, int n, int W) {
    // Initialize a vector 'prev' to represent the previous row of the DP table
    vector<int> prev(W + 1, 0);

    // Base condition: Fill in 'prev' for the weight of the first item
    for (int i = wt[0]; i <= W; i++) {
        prev[i] = val[0];
    }

    // Fill in the DP table using a bottom-up approach
    for (int ind = 1; ind < n; ind++) {
        for (int cap = W; cap >= 0; cap--) {
            // Calculate the maximum value by either excluding the current item or including it
            int notTaken = prev[cap];
            int taken = INT_MIN;

            // Check if the current item can be included without exceeding the knapsack's capacity
            if (wt[ind] <= cap) {
                taken = val[ind] + prev[cap - wt[ind]];
            }

            // Update 'prev' for the current capacity
            prev[cap] = max(notTaken, taken);
        }
    }

    // The final result is in the last cell of the 'prev' vector
    return prev[W];
}

int main() {
    vector<int> wt ; //= {1, 2, 4, 5};
    int n = 4;
    for(int i=0;i<n;i++){
    	int x;
    	cout<<"Enter weight: ";
    	cin>>x;
    	wt.push_back(x);
	}
    vector<int> val ; //= {5, 4, 8, 6};
    int m = 4;
    for(int i=0;i<m ;i++){
    	int x;
    	cout<<"Enter value: ";
    	cin>>x;
    	val.push_back(x);
	}
    
    int W = 5;
   // int n = wt.size();
    cout<<endl;
    cout << "The Maximum value of items:" << knapsack(wt, val, n, W);

    return 0;
}
