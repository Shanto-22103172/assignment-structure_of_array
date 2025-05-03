import array
n = int(input())
arr = array.array('i', [int(input()) for _ in range(n)])  
print(arr)
