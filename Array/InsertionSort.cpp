#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hole,val;
    for(int i=1;i<n;i++){
        val=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>val){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=val;
    }
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
