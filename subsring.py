s="open-source denotes software for which the original source code is made freely available and maysource be redistributed and modified."
str1="source"
n = len(str1)
count=0
d=s.split(",")
for i in range(len(s)-n):
    if(s[i:i+n]==str1):
        count=count+1
print(count)