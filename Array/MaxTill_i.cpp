#include<iostream>
using namespace std;
int main(){
   int arr[]={1,0,5,4,6,8};
   cout<<"Printing the array"<<endl;
   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
   cout<<"Printing after max till ith"<<endl;
   int j=0;
   int hole,val;
   for(int i=1;i<6;i++){

        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                arr[i]=arr[j];
            }
        }
    }
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }


}
