def InsertionSort(A):
  for i in range(1, len(A)):
    cur_value = A[i]
    j = i - 1
    while j >= 0 and A[j] > cur_value:
      A[j+1] = A[j]
      j -= 1
    A[j+1] = cur_value