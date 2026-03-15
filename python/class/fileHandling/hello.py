file1=open("test.txt","w")
print(list(file1))
file1.close()
L=["This is Delhi \n","This is Paris \n","This is Londen"]
file1.write("Hello \n")
file1.writelines(L)
file1.close()
 
# # file1=open("test.txt","r+")
# # print("output of read function is")
# # print(file1.read(45))

# # file1.seek(0)
# # print("output of readline function is ")
# # print(file1.readline())

# # print(file1.tell())

# # file1.seek(0)
# # print(file1.readlines())




# import pickle
# list1=[1,2,3,4,5]
# f=open("test.txt","wb")
# pickle.dump(list1,f)
# f.close()
# f=open("test.txt","rb")
# print(pickle.load(f))
# f.close()


# import pickle
# omkar={'key':'omkar', 'name':'omkar pathak','age':21,'pay':40000}
# jagdish={'key':'jagdish', 'name':'jagdish pathak','age':22,'pay':50000}
# db={}
# db['omkar']=omkar
# db['jagdish']=jagdish

# b=pickle.dumps(db)
# myEntry=pickle.loads(b)
# print(myEntry)