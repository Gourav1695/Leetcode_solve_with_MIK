#include<iostream>
using namespace std;

void merge(int arr[],int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    for(int i = 0; i<n1; i++){
        leftArr[i] = arr[left + i];     

    }
    for(int j = 0; j<n2; j++){
        rightArr[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0;
    while (i<n1 && j<n2){
        if(leftArr[i]<=rightArr[j]){
            arr[left] = leftArr[i];
            i++;
        }
        else {
            arr[left] = rightArr[j];
            j++;
        }
        left++;
    }
    while(i<n1){
        arr[left] = leftArr[i];
        i++;
        left++;
    }
    while(j<n2){
        arr[left]= rightArr[j];
        j++;
        left++;
    }

}

void mergeSort(int arr[],int left, int right){
    // base case
    if(left>=right){
        return;
    }
    int mid  = left + (right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main(){
    int arr[] = {38,27,43,3,9,82,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;
}
// tc --> O(nlogn) because we divide the array into two halves logn times and merge takes O(n) time
// sc --> O(n) for the temporary arrays used in the merge function, O(logn) for the recursive call stack in the worst case when n is large, otherwise O(1) for the auxiliary space.
