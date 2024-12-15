def exchange(lst1, lst2):
    sum1 = sum(lst1)
    sum2 = sum(lst2)
    eve1 = sum1 % 2 == 0
    eve2 = sum2 % 2 == 0
    
    if eve1 == True and eve2 == True:
        return "YES"
    elif eve1 == False and eve2 == False:
        return "NO"
    else:
        return "YES"