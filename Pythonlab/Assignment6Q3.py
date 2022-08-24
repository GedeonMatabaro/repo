import array
Size =  int(input("Enter the size of the array:"))
#Insert elemnt
def Insert(A, aa):
    c=int(input("\nEnter the position to insert the element\n"))
    b=int(input("\nEnter the value to be inserted\n"))
    if(c>aa+1):
        print("The position is grater than the size...")
        insert(A,aa)
    else:
        for i in range(Size-1,c-1,-1):
            A[i+1]=A[i]
        A[c]=b
        Size+=1
A=array.array('i',range(Size))
print("Enter the element of the array")
for i in range(0, Size):
    A[i]=int(input(":-> "))
print("The array elements are")
for i in range(0,Size):
    print(A[i],end=" |")
    
Insert(A)
print("The array elements after inserted are")
for i in range(0,Size):
    print(A[i],end=" |")
