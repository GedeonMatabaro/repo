from pickle import TRUE
num=[]
n=int(input("Ednter the total of numbers to find the hcf: "))
for k in range(0,n):
    num.append(int(input("Enter the second number : ")))
hcf=1
compt=0
bo=True
print("The min is \n",min(num))
#We cosider the minimum value of the list, then we start dividing by all the integers less than it
#if the current hcf is divisible by i, we skip it.
for i in range(min(num),1,-1):

    if(hcf%i!=0):
        for j in num:
            #We only consieder a certain value when it can divide all the elements in the list.
            if(num[compt]%i!=0):
                bo=False
                break
            compt=compt+1
        if (bo):
            hcf*=i
print("The HCF of",num," and ","is ",hcf)
#mkrathfca@kiit.ac.in
#3drad