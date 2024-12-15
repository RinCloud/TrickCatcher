a=int(input())
print("YNeos"[(a//10)%111*(a%1000)%111>0::2])