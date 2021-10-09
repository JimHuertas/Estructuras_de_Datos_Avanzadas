import time

def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]

while (True):
    arr = []
    line = input()
    if (not line):
        break
    line = line.split()
    for i in line:
        arr.append(int(i))
    inicio = time.time()
    bubbleSort(arr)
    fin = time.time()

    print(fin-inicio)

