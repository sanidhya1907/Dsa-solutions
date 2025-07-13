#include<iostream>
using namespace std;

int main(){
    int i =0;
    int marks[]={43,90,76,88,56,43};
    do{
        cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    while(i<6);

    
    return 0;
}