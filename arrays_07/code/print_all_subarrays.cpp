//print_all_subarrays
#include <iostream>
using namespace std;

int main(){
    int n,total_subarray=0;
    cout<<"Enter the size of array :";
    cin>>n;
    int array[n];
    cout<<"Enter elements in array :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<array[k]<<" ";
            }
            total_subarray++;
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"total sub array :"<<total_subarray;
    return 0;
}