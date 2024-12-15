n = int(input())

if n%4 == 0 or n%7 == 0:
    print("Yes")
    
elif n >= 11:
    div_4, mod_4 = divmod(n, 4)
        
    for i in range(div_4+1):

        temp_n = n - i*4

        if temp_n%7 == 0:
            print("Yes")
            break
            
    else:
        print("No")
        
else:
    print("No")