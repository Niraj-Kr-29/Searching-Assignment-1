#include<iostream>

using namespace std;
int main(){
    int arr[] = {0,0,0,0,1,1};
    int n = 6;
    // number of 1's = (last index - first occurence of 1) + 1
    int lo = 0, hi = n -1;
    int firstOccurence = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==1){
            if(mid == 0 || arr[mid-1]!=1){
                firstOccurence = mid;
                break;
            }
            else hi = mid - 1;
        }
        else lo = mid + 1;
    }
    if(firstOccurence == -1) cout<<"No 1 present";
    else cout<<"Number of 1's = "<<((n-1)-firstOccurence+1);
}