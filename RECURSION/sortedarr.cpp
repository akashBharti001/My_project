#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    int preArray=sorted(arr+1,n+1);
    return (arr[0]<arr[1] && preArray);
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<sorted(arr,6)<<endl;

}