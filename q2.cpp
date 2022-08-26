//Piyush Koul   
//2010990528
//Set No. 04
//Question 2
#include<iostream>
using namespace std;
void sort(int *arr,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int smallest(int *arr,int n){
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;
}
int largest(int *arr,int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
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
    sort(arr,n);
    string flag="true";
    int index=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            continue;
        }
        else{
            flag="false";
            index=i;
            break;
        }
    }
    if(flag=="true"){
        cout<<"The array contains consecutive integers from "<<smallest(arr,n)<<" to "<<largest(arr,n)<<endl;
    }
    else{    
        if(index==-1){   
        cout<<"The array does not contain consecutive integers as element "<<arr[index]<<" is repeated"<<endl;
    }
    else{
        cout<<"The array does not contain consective integers"<<endl;
    }
    }
}