#include<iostream>
using namespace std;
//Recursion means a function calling itself again again leads to stack formation
//Linear recursion                              Tree Recursion

class recursion{
    void factorial(int n){
        int fact=1;
        while(n>0){
            fact=fact*(n);
            n--;
        }
    }
    int fibbo(int n){
        if(n==0){
            cout<<0;
            return 0;
        }
        else if(n==1){
            cout<<1;
            return 1;
        }
        int r=fibbo(n-1)+fibbo(n-2);
        cout<<r;
        return r;
    }
    int main(){
        int n;
        cout<<"Enter number for factorial::";
        cin>>n;
        factorial(5);
        fibbo(5);
        return 0;
    }
};