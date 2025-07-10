#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    while(num!=0){
        int digit =num % 10;
        int ans =0;
        ans = (ans*10) + digit;
        cout<<ans;
        num=num/10;
    }
    return 0;
}