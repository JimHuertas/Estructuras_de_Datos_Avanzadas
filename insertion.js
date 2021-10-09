function insertion_sort(vec){
    var j, clave;

    for (var i = 0; i < vec.size(); i++){
        clave = vec[i];
        j = i-1;
        while (j >= 0 && vec[j]>clave){
            vec[j+1] = vec[j];  
            j = j-1;
        }
        vec[j+1] = clave;    
    }
}