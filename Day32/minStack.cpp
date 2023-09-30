#include <bits/stdc++.h> 
using namespace std;
// Implement class for minStack.
class minStack
{
	// Write your code here.
	vector<pair<int,int>>v;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(v.empty()){
				v.push_back({num,num});
			}else{
				int minVal = min(v.back().second,num);
				v.push_back({num,minVal});
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			
			if(v.empty()){
				return -1;
			}else{
				int top = v.back().first;
				v.pop_back();
				return top;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(v.empty()){
				return -1;
			}else{
				return v.back().first;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(v.empty()){
				return -1;
			}else{
				
				return v.back().second;
			}
		}
};