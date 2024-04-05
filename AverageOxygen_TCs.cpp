// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<unordered_map>
int main() {
    // Write C++ code here
    // int n;
    // cout<<"enter number of rounds";
    // cin>>n;
    int maxi=0;
    int avg[3]={0};
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        if(arr[i][j]<1 || arr[i][j]>100){
            arr[i][j]=0;
        }}
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            avg[i]+=arr[i][j];
        }
        avg[i]/=3;
    }
    for(int i=0;i<3;i++){
        if(maxi<avg[i]){
            maxi=avg[i];
        }
    }
    for(int i=0;i<3;i++){
        if(avg[i]==maxi){
            cout<<"Trainee Number:"<<i+1<<endl;
        }
        if(avg[i]<70){
            cout<<"All trainee is invalid"<<endl;
        }
    }
    return 0;
}