# Write the program to find the sum of the series
#S= 1+x^1+x^2+...+x^n
# (input x and n)
x=int(input("Enter the value of x "))
n=int(input("Enter the value of n "))
s=0
for i in range(0,n,1):
    s+=(x**i)
print("the sum of the serie is ",s)
#thanks 