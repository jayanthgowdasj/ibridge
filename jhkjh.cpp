#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;
    cout<<b<<" "<<&a<<endl;
    return 0;
}