#include <iostream>
#include <vector>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(vector<int>&arr, int n){
    int min_idx;
    for (int i = 0; i < n-1; i++){
        min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(vector<int>&arr, int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    vector<int> arr {64, 25, 12, 22, 11};
    selectionSort(arr, arr.size());
    cout << "Sorted array: \n";
    printArray(arr, arr.size());
    return 0;
}
 
// This is code is contributed by rathbhupendra