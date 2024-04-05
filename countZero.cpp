#include <iostream>
using namespace std;
int countZeros(int n){
    if(n==0) return 0;
    int digit=n%10;
    int count=countZeros(n/10);
    if(digit==0){
         count++;
         return count;
    }
    return count;
}
int main() {
    // Write C++ code here
 
    cout<<countZeros(86003);
    return 0;
}