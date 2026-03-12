def mergeArrays(arr1, arr2):
    n = len(arr1)
    m = len(arr2)

    # temporary array to store all elements 
    # from arr1 and arr2
    merged = [0] * (n + m)

    # copy elements from arr1 and arr2 
    # into merged array
    for i in range(n):
        merged[i] = arr1[i]
    for j in range(m):
        merged[n + j] = arr2[j]

    # sort the merged array
    merged.sort()

    # distribute first n elements to arr1
    for i in range(n):
        arr1[i] = merged[i]

    # distribute remaining m elements to arr2
    for j in range(m):
        arr2[j] = merged[n + j]


if __name__ == "__main__":
    arr1 = [1, 3, 5, 7]
    arr2 = [2, 4, 6, 8]

    mergeArrays(arr1, arr2)

    print(*arr1)
    print(*arr2)