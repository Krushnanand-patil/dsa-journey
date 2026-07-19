//linear_search
#include<iostream>
using namespace std;
int linear_search(int arr[], int size, int target) {
    for(int i=0;i<size;i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n,target;
    cout<<"Enter size of array: ";
    cin>>n;

    int array[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    cout<<"Enter target value: ";
    cin>>target;

    int index = linear_search(array, n, target);

    if(index==-1) {
        cout<<"Not Found"<<endl;
    }
    else {
        cout << "Target found at index " << index;
    }
    return 0;
}