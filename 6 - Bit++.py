number = input()
x= 0
for i in range(int(number)):
    statment = input()

    if statment[0] == "+" or statment[1] == "+":
        x +=1
    else:
        x -=1

print(x) 