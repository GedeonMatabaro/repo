n=int(input("Enter the number n: "))
prev=0
fib=0
c=0
print("The fibonachi numbers from 0 to ",n,": ")
if (n==1 or n==0):
    print(prev,", ",fib )
if (n>0):
    for i in range(0,n,1):
        if (i==1):
            fib=1
            print(fib )
        c=fib+prev
        prev=fib
        fib=c
        print(fib,"  ")
else:
    print("Impossible to find the fibonacci from 0 to",n)

