import array
def findAverage(A,Size):
    sum=0
    av=0
    for i in range(0,Size):
        sum+=A[i]
    av=float(sum/Size)
    return (float(av))
#Find Var
def findVar(A,Size):
    mean=findmin(A,Size)
    var=0
    sum_sqr=0
    for i in range(0,Size):
       sum_sqr+=(mean-A[i])**2
    var=float(sum_sqr/Size)
    return (float(var))
def findStdv(A,Size):
    Var=findVar(A,Size)
    stdv=(Var)**0.5
    return (float(stdv))
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
M=findVar(A,Size)
m=findStdv(A,Size)
print("The average of element in the array is ",d)
print("The Variance of element in the array is ",M)
print("The standar deviation of element in the array is ",m)
print("The array elements are")
for i in range(0,Size):
    print(A[i],end=" |")
