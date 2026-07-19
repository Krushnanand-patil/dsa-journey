//array_min_max.cpp
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int array[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++) {
        if(array[i]>max) {
            max=array[i];
        }
        if(array[i]<min) {
            min=array[i];
        }
    }
    cout<<"max and min num are "<<max<<" and "<<min;
    return 0;
}