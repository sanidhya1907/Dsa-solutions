#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i =1;
    while(i<=n){
        int space=1;
        while(space<1){
        cout<<" ";
        space++;
    }
        int j =1;
        while(j<=2*((n-i+1)-1)){
            cout<< "*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}