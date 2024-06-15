#include<iostream>
using namespace std;
int main(){
   int arr[] = {1,2,2,3,4,5};
   int ans = -1;
   int lo = 0, hi = 5;
   while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]!=mid+1){
        ans = arr[mid];
        hi = mid - 1;
    }
    else lo = mid + 1;
   }
   cout<<ans;
}