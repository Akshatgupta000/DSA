a=int(input("Enter first no. "))
b=int(input("Enter second no. "))
c=int(input("Enter third no. "))

if(a>b and a>c):
    print("a is largest",a)
if(b>a and b>c):
    print("b is largest",b)
else:
    print("c is largest",c)
