#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> p, int n)
{
//     next_permutation(p.begin(),p.end());
//     return p;
    int swapper = -1;
    for(int i = p.size() -2 ; i>= 0 ; i--){
//         i +1 is peak point inflation point
        if(p[i]<p[i+1]){
            swapper = i;
            break;
        }
       
        
    }
     if(swapper == -1){
            reverse(p.begin(),p.end());
         return p ;
        }
    else{
//         find the closest greater number from the back
        int swapper2 = -1;
        for(int i = p.size() - 1 ; i>swapper ; i--){
            if(p[i]>p[swapper]){
                swapper2 = i;
                break;
            }
        }
        swap(p[swapper2],p[swapper]);
        reverse(p.begin()+swapper+1,p.end());
        return p;
    }
}
