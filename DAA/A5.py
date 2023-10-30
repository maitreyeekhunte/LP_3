import random
def deterministic_quick_sort(arr):
    if len(arr) <= 1:
        return arr
    
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    
    return deterministic_quick_sort(left) + middle + deterministic_quick_sort(right)

# Randomized Quick Sort
def randomized_quick_sort(arr):
    if len(arr) <= 1:
        return arr
    
    pivot = random.choice(arr)
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    
    return randomized_quick_sort(left) + middle + randomized_quick_sort(right)

size = 8
arr = [random.randint(1, 1000) for _ in range(size)] 
print("Array is: ",arr)

res = deterministic_quick_sort(arr)
res1 = randomized_quick_sort(arr)

print("After Deterministic Quick Sort: ",res)
print("After Randomized Quick Sort: ",res1)