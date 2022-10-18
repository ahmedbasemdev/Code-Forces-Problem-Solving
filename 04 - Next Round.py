n,k = map(int, input().split())
participants = [int(letter) for letter in input().split()]

temp = participants[k-1]

counter = 0

for part in participants:
    if part >= temp and part > 0:
        counter +=1


print(counter)