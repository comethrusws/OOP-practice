#include<iostream>
using namespace std;
int main(){
    int* num= new int;

    if (num==nullptr){
        cout<<"Mem Alloc failed";
        return 1;
    }

    cout<<"Enter a number:";
    cin>>*num;
    cout<<"Entered Num is:"<<*num<<endl;
    delete num;
    return 0;
}