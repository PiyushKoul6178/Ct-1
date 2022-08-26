//Piyush Koul   
//2010990528
//Set No. 04
//Question 1
#include<iostream>
#include<unordered_set>
using namespace std;
int findMinIndex(int arr[], int n){
    int minimumIndex=n;
    unordered_set<int> set;
    for (int i=n-1;i>=0;i--){
        if(set.find(arr[i])!=set.end()){
            minimumIndex=i;
        }
       else{
            set.insert(arr[i]);
        }
    }
    if(minimumIndex==n) {
        return -1;
    }
    return minimumIndex;
}
int main(){
    cout<<"Enter number of elements in array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int minimumIndex=findMinIndex(arr, n);
    if(minimumIndex!=n && minimumIndex!=-1){
        cout<<"The minimum index of the repeating element is "<<minimumIndex;
    }
    else if(minimumIndex==-1){
        cout<<"Invalid Input";
    }
}