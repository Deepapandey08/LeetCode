#include<iostream>
using namespace std;
class Recur{
    bool palli(int n){
        if(n<0) return false;
        if(n%10==n/10){
            palli(n/10);
        }
        else{
            return false;
        }
    }
    int main(){
        int n;
        cin>>n;
        cout<<palli(n);
        return 0;
    }
};
