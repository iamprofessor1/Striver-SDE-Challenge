#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int fast = arr[0];
        int slow = arr[0];
        do{
            slow = arr[slow];
            fast = arr[arr[fast]];
        }while(fast!=slow);
        slow = arr[0];
        while(slow!=fast){
            slow = arr[slow];
            fast = arr[fast];
        }
        
        return slow;
    
}
