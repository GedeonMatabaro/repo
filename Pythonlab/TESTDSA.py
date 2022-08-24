#buble sort
"""a=[]
for i in range(10):
    a.append(int(input("-> ")))
print("\nBubble sort:\n")
key=0
boo=0
print(a)
for i in range(10):
    for j in range(0, 10-1-i):
        boo=0
        if (a[j]>a[j+1]):
            boo=1
            key=a[j]
            a[j]=a[j+1]
            a[j+1]=key
    if boo==0:
        break
print(a)
"""
"""a=[145,1,45,3,6,7,342,8,15,4]
#for i in range(10):
   # a.append(int(input("-> ")))
print("\nInsertion sort:\n")
key=0
print(a)
for i in range(1, 10):
    for j in range(i, 0, -1):
        if (a[j]<a[j-1]):
            boo=1
            key=a[j]
            a[j]=a[j-1]
            a[j-1]=key
print(a)
"""
a=[145,1,45,3,6,7,342,8,15,4]
#for i in range(10):
   # a.append(int(input("-> ")))
print("\nSelection sort:\n")
minindex=0
print(a)
for i in range(0, 10):
    minindex = i
    for j in range(i+1, 10):
        if (a[minindex]>a[j]):
            minindex=j
    key=a[i]
    a[i]=a[minindex]
    a[minindex]=key
print(a)
