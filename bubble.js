function bubbleSort( arr, n){
    for (var i = 0; i < n-1; i++){
        for (var j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                var aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = aux;
            }
        }
    }
}