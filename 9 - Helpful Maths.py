process = input()

letters = [letter for letter in  process.split("+")]
print("+".join(sorted(letters)))