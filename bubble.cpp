#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(vector<int> &arr, int n){
    int i, j;
    for (i=0; i<n-1; i++)    
        for (j=0; j<n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int stringToInt(string txt){
    return stoi(txt);
}

void vecCoaches(string aux, vector<int> &resultados){
    istringstream isstream(aux);
    while(!isstream.eof()){
        string tempStr;
        isstream >> tempStr;
        resultados.push_back(stringToInt(tempStr));
    }
}

int main(){
    char aux1[500];
    
    while(true){
        int K;
        int num;
        int cont=0;
        vector<int> results;
        while(cont++ < K){
            cin>>num;
            results.push_back(num);
        }
        bubbleSort(results, results.size());
            for(int i : results)
                cout<<i<<" ";
            cout<<endl;
    }
    
    return 0;
}