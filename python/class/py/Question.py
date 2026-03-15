n=input()
result=""
for i in range(len(n)):
    if i%2==0:
        result=n[i].upper()
        print(result,end="")
    else:
        result=n[i]
        print(result,end="")