#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &vec){
    int j, clave;

    for (int i = 0; i < vec.size(); i++){
        clave = vec[i];
        int j = i-1;
        while (j >= 0 && vec[j]>clave){
            vec[j+1] = vec[j];  
            j = j-1;
        }
        vec[j+1] = clave;    
    }
}