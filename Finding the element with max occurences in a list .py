def migratoryBirds(arr):
    # Write your code here
    unique_list=[]
    for i in arr:
        if i not in unique_list:
            unique_list.append(i)
    occ=[]
    key=[]
    for i in unique_list:
        occ.append(arr.count(i))
        key.append(i)
    unique_occ=[]
    for i in range(len(occ)):
        if occ[i]==max(occ):
            unique_occ.append(key[i])
    
    return min(unique_occ)
