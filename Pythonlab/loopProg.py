#WAP to find the average of all the odd numbers present from 1 to 1000
#2 Find th eHCF of two numbers
#Hcf(20,40)=20
#wap TO CHEK whether the number is perfect or not
d=0
i=0
sum=0
for x in range(1000):
    if(x%2!=0):
        d=d+1
        sum += x
        print(x)
average=sum/d
print("the average is",average)
 

