#include <iostream>
using namespace std;
int result(int n){
    if(n==0) return 0;
    int unit=n%10;
    int res=unit+result(n/10);
    return res;
}
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter number to get its digit sum";
    cin>>n;
    int r=result(n);
    cout<<"Output is "<<r;
    return 0;
}