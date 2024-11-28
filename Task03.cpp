#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter a number:";
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            sum=sum+arr[row][col];
        }
    }
    cout<<sum;
    return 0;
}