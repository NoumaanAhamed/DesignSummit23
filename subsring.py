s="open-source denotes software for which the original source code is made freely available and may be redistributed and modified."
str1="source"
count=0
d=s.split()
for i in range (len(d)):
    if(d[i]==str1):
        count=count+1
print(count)


