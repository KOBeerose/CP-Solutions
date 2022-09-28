def sortedSquaredArray(array):
    # Write your code here.
    # taha's solution O(nlog(n))
    # return sorted(x**2 for x in array)

    # taha's solution O(n)
    results = [0 for _ in array]
    largeIdx = len(array)-1
    smallIdx = 0
    idx = -1
    while smallIdx <= largeIdx :
        if abs(array[smallIdx]) <= abs(array[largeIdx]):
            results[idx] = (array[largeIdx]**2)
            largeIdx-=1
        else :
            results[idx] = (array[smallIdx]**2)
            smallIdx+=1   
        idx-=1

    return results

    
