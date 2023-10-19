#code to find the no of occurances of a number in an array
a=[10,20,30,40,50,20]
c=20
counter = 0
for i in range(len(a)):
    if(a[i]==c):
        counter += 1
print("No. of occurance of the number in array : ", counter)
        