dic = [1, 2]
for i in range(2, W):
    dic.append(dic[i - 1] + dic[i - 2])
