#include<iostream>
using namespace std;

int main(){
    int n, answer=0, frequency=0, i=0, count=0;
    cout<<"Enter size of array :";
    cin>>n;
    int array[n];
    cout<<"Enter element in array :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    while(i<n){
        if(frequency==0){
             answer=array[i];
            frequency++;
         }
         else if(answer==array[i]){
            frequency++;
        }
         else if(answer!=array[i]){
            frequency--;
         }
         i++;
    }
    for(int j=0; j<n; j++){
        if(array[j] == answer){
            count++;
        }
    }
    if(count > n/2){
        cout<<"Majority Element :"<<answer;
    }
    else{
        cout<<"No Majority Element";
    }
    return 0;
}