#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	// Write your code here.
	 stack<int> stk;
	 
	 for(int i=0; i<n; i++) stk.push(i);
	 
	 while(stk.size()>1)
	 {
		 int x = stk.top();
		 stk.pop();
		 int y = stk.top();
		 stk.pop();

		 if (knows(x,y)) stk.push(y);
		 else stk.push(x);
	 }

	 int per = stk.top();

	 for(int i=0; i<n; i++)
	 if ((per != i) && (knows(per, i) || !knows(i, per))) return -1;

	 return per;
	 
}
