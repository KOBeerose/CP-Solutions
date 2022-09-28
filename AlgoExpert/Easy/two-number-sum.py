def twoNumberSum(array, targetSum):
    # Write your code here.
    
    # taha's solution O(n^2)
    # result = []
    # for i in range (len(array)):
    #     for j in range (i+1,len(array)):
    #         if  array[i] != array[j] and array[i]+array[j] == targetSum:
    #             result.extend([array[i],array[j]])
    # return(result)

    # taha's solution O(n)
    hash_table = {}
    result = []
    for number in array:
        difference = targetSum - number
        if difference in hash_table:
            result.extend([difference, number])
        else:
            hash_table[number] = "wanted"
    return result