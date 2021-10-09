def partition(start, end, array):
    pivot_index = start 
    pivot = array[pivot_index]
    while start < end:
        while start < len(array) and array[start] <= pivot:
            start += 1
        while array[end] > pivot:
            end -= 1
        if(start < end):
            array[start], array[end] = array[end], array[start]
    array[end], array[pivot_index] = array[pivot_index], array[end]

    return end

def quick_sort(start, end, array):
    if (start < end):
        p = partition(start, end, array)

        quick_sort(start, p - 1, array)
        quick_sort(p + 1, end, array)

def quick(array):
    quick_sort(0, len(array) - 1, array)
array = [ 10, 7, 8, 9, 1, 5 ,123,123,4532,54,7654,54,78,768,5,635,653,6356,53]

quick(array)
print(f'Sorted array: {array}')