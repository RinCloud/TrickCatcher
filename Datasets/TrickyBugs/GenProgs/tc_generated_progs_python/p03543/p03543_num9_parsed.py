a=int(input())
print("Yes" if (a%10==(a//10)%10==(a//100)%10 or (a//10)%10==(a//100)%10==(a//1000)%10) else "No")