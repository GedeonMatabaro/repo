#Binary search using pyhton
import array
def binarysearch(A,beg,end,c):
    if (A[beg]>c or A[end]<c):
        return -1
    else:
        mid=int((beg+end)/2)
        if(A[mid]>=c):
            if(A[mid]==c):
                return mid
            end=mid-1
        else:
            beg=mid+1
        return (binarysearch(A,beg,end,c))
Size=int(input("Enter the size of the array:"))
A=array.array('i',range(Size))
for i in range(0, Size):
    A[i]=int(input(":-> "))
c=int (input("Enter the number to search: "))
beg=0
end=Size-1
d=binarysearch(A,beg, end, c)
if(d==-1):
    print("The element does not exist in the array")
else:
    print(d," is the positoin of the element :",c)
print("The array elements are")
for i in range(0,Size):
    print(A[i],end=",")