# print([a*7 for a in range(1,11) if(not a*7==42)])
# n1=int(input("Enter first number:"))
# n2=int(input("Enter second number:"))
# print([a for a in range(n1,n2) if(a%2==0) and (a%3==0)])


# def myfun(*argv):
#     for arg in argv:
#         print(arg)
        
# myfun('Hello','Welcome','to','GeeksforGeeks')


# x=lambda:sum(range(1,11))
# print(x())

# l1=[1,2,3,4,5]
# x=lambda:max(l1)
# print(x())


a=input()
l=list(a)
print([[x,l.count(x)] for x in set(l)])