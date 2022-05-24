n = input()
data = []

for i in n :
    data.append(int(i))
data.sort(reverse=True)
print(*data, sep='')
