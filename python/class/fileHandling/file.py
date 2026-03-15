
# write() Method
# f=open("new.txt","w")
# f.write("Now is the time")
# f.write("to close the file")
# f.close()

# read() Method
# f=open("new.txt","r")
# text=f.read()
# print(text)

# read() and write()
# f=open("new.txt","w")
# f.write("Write")
# f.close()
# f=open("test.txt")
# print(f.read())
# f.close()


# Writeline() and readline() example 
# file1=open("new.txt","w")
# L=["This is Delhi \n","This is Paris \n"]

# file1.write("Hello\n")
# file1.writelines(L)
# file1.close()

# file1=open("test.txt","r+")
# print("Output of Read function is")
# print(file1.read(45))

# file1.seek(0)
# print("output of readline function is ")
# print(file1.readline())
# file1.seek(0)


# append()
f=open("new.txt","a")
f.write("This text is for appending")
f.close()
