/*
https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge&leftPanelTab=0  
 */

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zeroptr = 0, twoptr = n-1;
   int ptr = 0;
   while(ptr<=twoptr){
       if(arr[ptr] == 0){
           swap(arr[ptr],arr[zeroptr]);
           zeroptr++;
           ptr++;
       }
       else if(arr[ptr] == 1){
           ptr++;
       }
       else {
           swap(arr[twoptr],arr[ptr]);
           twoptr--;
       }
   }
}
