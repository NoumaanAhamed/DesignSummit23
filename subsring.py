s = "open-source denotes software for which the original source code is made freely available and may be redistributed and modified."
str1 = "source"
count = 0
words = s.split()

for word in words:
    if word == str1:
        count += 1

print(count)
