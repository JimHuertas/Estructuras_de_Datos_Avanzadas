def shellSort(arr):
    gap = len(arr)//2
    while gap > 0:
        i = 0
        j = gap
        while j < len(arr):
            if arr[i] >arr[j]:
                arr[i],arr[j] = arr[j],arr[i]
            
            i += 1
            j += 1
            k = i

            while k - gap > -1:
                if arr[k - gap] > arr[k]:
                    arr[k-gap],arr[k] = arr[k],arr[k-gap]
                k -= 1
        gap //= 2

arr2 = [ 10, 7, 8, 9, 1, 5 ,123,123,4532,54,7654,54,78,768,5,635,653,6356,53,1,5,3,67,33,2,6,573,724,9,984,79,4,3,31,43,64526,24,4]
shellSort(arr2)
print("sorted array",arr2)