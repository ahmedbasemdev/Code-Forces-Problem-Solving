string = input().lower()
output = ""
vowels = ['a', 'e', 'i', 'o', 'u','y']

for letter in vowels:
    string = string.replace(letter, "")

for letter in string:
    output += "."
    output +=letter

print(output)