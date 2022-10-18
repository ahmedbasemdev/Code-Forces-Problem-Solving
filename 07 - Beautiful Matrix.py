
counter = 0

for i in range(5):
    row = input().split()
    if "1" in row :
        counter += abs(i - 3 + 1)
        for i in range(5):
            if row[i] == "1":
                counter += abs(i - 3 + 1)

print(counter)


        