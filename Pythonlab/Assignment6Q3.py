import array
#Insert elemnt
def insert(A,Size):
    c=int(input("Enter the position to insert the element\n"))
    b=int(input("Enter the value to be inserted\n"))
    if(c>Size):
        print("The position is grater than the size...")
        insert(A, Size)
    else:
        for i in range(Size-1,c-1,-1):
            A[i+1]=A[i]
        A[c]=b
Size=int(input("Enter the size of the array:"))
A=array.array('i',range(20))
for i in range(0, Size):
    A[i]=int(input(":-> "))
print("The array elements are")
for i in range(0,Size):
    print(A[i],end=" |")
insert(A,Size)
print("The array elements after inserted are")
for i in range(0,Size):
    print(A[i],end=" |")
