# try:
#     print(x)
# except:
#     print("Something else went wrong")
# finally:
#     print("the 'try except' is finished")
    
# try:   
#     num1=int(input("Enter num1: "))    
#     num2=int(input("Enter num2: ")) 
#     print(num1/num2)  
# except:
#    print("Division not allowed")


# try:
#     a=int(input("Enter a: "))
#     b=int(input("Enter b: "))
#     c=print(a+b)
#     d=print(a/b)
#     e=print(a-b)
#     print("try successful")
# except ZeroDivisionError:
#     print("zero division error occurred")
# except NameError:
#     print("name error occurred")
# except Exception:
#     print("exception occurred")
    
    
    
# try:
#     a=int(input("enter a:"))
#     b=int(input("enter b:"))
#     print(a+b)
#     print(a/b)
#     print("try successful")
# except ArithmeticError:
#     print("arithmetic error")
# except Exception:
#     print("exception occurred")
# finally:
#     print("executed in any condition")


class OurException(Exception):
    def __init__(self,message):
        self.message=message
class UsingUserException:
    try:
        a=int(input("a: "))
        b=int(input("b: "))
        if b==0:
            raise OurException("b should be greater than 0")
        d=a/b
        print("division operation successful with result:".d)
    except OurException as err:
        print("user defined exception",err.message)