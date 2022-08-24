def checkdiv5or3(a):
    if (a%3==0 and a%5==0):
        print("The number {} is devisible by 3 and 5".format(a))
    else:
        print("The number {} is notdivisible by 3 and 5".format(a))
print("\tWELCOME\n\t---------\n")
number=int(input("Enter the Number"))
checkdiv5or3(number)
