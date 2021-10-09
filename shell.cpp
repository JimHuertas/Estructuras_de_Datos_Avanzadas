#include <iostream>
#include <vector>
using namespace std;

int shellSort(vector<int> &arr, int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i += 1){
            int temp = arr[i];
            int j;           
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
}

void printArray(vector<int> &arr, int n){
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main(){
    vector<int> arr {12, 34, 54, 2, 3};
    int i;
    shellSort(arr, arr.size());
    cout << "Array after sorting: \n";
    printArray(arr, arr.size());
 
    return 0;
}