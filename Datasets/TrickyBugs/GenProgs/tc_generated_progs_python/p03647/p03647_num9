UPDATED CODE:
def getinputdata():
    array_result = []
    data = input()
    array_result.append(data.split(" "))
    flg = True
    try:
        while flg:
            data = input()
            array_temp = []
            if(data != ""):
                array_result.append(data.split(" "))
                flg = True
            else:
                flg = False
    finally:
        return array_result

arr_data = getinputdata()
n = arr_data[0][0]
m = int(arr_data[0][1])
arr01 = []
flag1 = False
arr02 = []
flag2 = False

for i in range(1, 1 + m):
    if arr_data[i][0] == "1":
        arr01.append(arr_data[i][1])
        flag1 = True
    if arr_data[i][1] == n:
        arr02.append(arr_data[i][0])
        flag2 = True

if flag1 and flag2:
    print("POSSIBLE")
else:
    print("IMPOSSIBLE")