def isValidSubsequence(array, sequence):
    # Write your code here.
    
    # taha's solution O(n)
    # hash_table = {x:"" for x in array}
    # for i in range(len(sequence)):
    #     if sequence [i] not in hash_table:
    #         return False
    #     hash_table.pop(sequence[i])
    # return True
    
    # taha's solution O(n)
    ArrayPointer = 0
    SeqPointer = 0
    while ArrayPointer < len(array) and SeqPointer < len(sequence):
        if array[ArrayPointer] == sequence[SeqPointer]:
            SeqPointer+=1
        ArrayPointer+=1
    return (len(sequence)==(SeqPointer))



