#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {8,7,6,5},
        {4,3,2,1}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}