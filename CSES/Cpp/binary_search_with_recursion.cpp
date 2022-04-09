#include<bits/stdc++.h>

using namespace std;


int binary(int arr[],int s,int h,int x){


    if(s<=h){

        int mid = s + (h-s)/2;

        if (arr[mid]==x)
        return mid;

        else if(arr[mid]<x)
        return binary(arr,mid+1,h,x);

        else 
        return binary(arr,s,mid-1,x);

    }
    return -1;
}


int main(){

    int n; 
    
    int arr[] = { 2, 3, 4, 10, 40 };

    int x = 10;

    n = sizeof(arr)/sizeof(arr[0]);

    int result = binary(arr,0,n-1,x);

    (result==-1)?  cout << "Element is not present in array": cout << "Element is present at index " << result;

    
    return 0;

}
