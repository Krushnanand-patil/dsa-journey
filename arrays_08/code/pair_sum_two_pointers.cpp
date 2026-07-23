//pair_sum_two_pointers
#include<iostream>
using namespace std;
int main(){
    int n,target_sum;
    cout<<"Enter size of array :";
    cin>>n;
    int array[n];
    cout<<"Enter elements in aaray :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter targrt sum :";
    cin>>target_sum;

    int i=0,j=n-1;
    while(i<j){
        int sum=0;
        sum=array[i]+array[j];
        if(sum==target_sum){
            cout<<"numbers found at index "<<i<<" and "<<j;
            return 0;
        }
        else if(sum<target_sum){
            i++;
        }
        else if(sum>target_sum){
            j--;
        }
        else{
            cout<<"sum is not possible ";
        }
    }
    return 0;
}