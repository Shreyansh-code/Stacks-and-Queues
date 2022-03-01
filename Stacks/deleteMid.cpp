#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    //base case
    if(count==size/2){
        inputStack.pop();
        return;
    }
   
        int removed = inputStack.top();
        inputStack.pop();
        solve(inputStack, count+1, size);
        inputStack.push(removed);
    
}


void deleteMiddle(stack<int>&inputStack, int N){
	int count = 0;
    solve(inputStack, count, N);
   // Write your code here
   
}
