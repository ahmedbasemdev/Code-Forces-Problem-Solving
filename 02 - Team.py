iterator = int(input())

counter = 0
for i in range(iterator):
    line = input()

    if line.count("1") >= 2 :
        counter +=1

print(counter)

