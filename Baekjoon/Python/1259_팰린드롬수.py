save = 0
while True :
    x = input()
    if x == "0" :
        break
    save = x[::-1]
    if save == x :
        print("yes")
    else :
        print("no")
