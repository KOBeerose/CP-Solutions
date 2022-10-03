array = [2, 2, 3, 5, 5, 7, 11, 11, 11, 13]


index = 0
for i in range(len(array)-1):
    if array[i] != array[i+1]:      
        array[index] = array[i] 
        index+=1  

array[index] = array[len(array)-1]
print(array[:index+1])

