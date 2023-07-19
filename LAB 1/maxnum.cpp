#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int greatestnum=0;

    cout<<"Enter Any 5 Numbers:";
    for(int i=0; i<5; i++){
        cin>> arr[i];
    }
    
    for(int i=0; i<5; ++i){
        if(arr[i]> greatestnum){
            greatestnum= arr[i];
        }
    }

    cout<<"The Maximum Number is: "<<greatestnum<<endl;
    return 0;
}