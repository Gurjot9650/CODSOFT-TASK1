#include<iostream>
using namespace std;

int main(){
    while(1){
    int a=-1,b;
    cout<<"Enter value of n for range of numbers:-  ";
    cin>>b;
    int n = rand()%b;
    while(a!=n){
    cout<<"Choose any num bw 0 to "<<b<<":- ";
    cin>>a;
    if(a>n){
        cout<<"too large"<<endl;
    }
    else if(a<n){
        cout<<"too small"<<endl;
    }
    else if(a==n){
        cout<<"you are correct!!"<<endl;
    }
    cout<<endl;
}
}
}