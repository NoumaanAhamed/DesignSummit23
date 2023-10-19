#code to find the no of occurances of a number in an array
a = [10, 20, 30, 40, 50, 20]
c = 20
count = 0

for i in range(len(a)):
    if a[i] == c:
        count += 1

print(count)

        