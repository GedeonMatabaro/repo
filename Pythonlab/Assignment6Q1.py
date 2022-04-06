import array
def findAverage(A,Size):
    sum=0
    av=0
    for i in range(0,Size):
        sum+=A[i]
    av=float(sum/Size)
    return (float(av))
#Find max
def findMax(A,Size):
    max=A[0]
    for i in range(1,Size):
       if (max<A[i]):
           max=A[i]
    return max
#Find min
def findmin(A,Size):
    min=A[0]
    for i in range(1,Size):
       if (min>A[i]):
           min=A[i]
    return min
Size=int(input("Enter the size of the array:"))
A=array.array('i',range(Size))
for i in range(0, Size):
    A[i]=int(input(":-> "))
d=findAverage(A,Size)
m=findmin(A,Size)
M=findMax(A,Size)
print("The average of element in the array is ",d)
print("The max of element in the array is ",M)
print("The max of element in the array is ",m)
print("The array elements are :")
for i in range(0,Size):
    print(A[i],end=" |")
