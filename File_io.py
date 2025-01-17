# f = open("demo.txt","r")
# data = f.read()
# print(data)
# print(type(data))
# f.close()  

# data = f.read()
# print(data)

# line1 = f.readline()
# print(line1)

# line2 = f.readline()
# print(line2)

# f = open("demo.txt","w")
# f.write("this is a new file") #overwrites the entire file

# f = open("demo.txt","a")
# f.write("this is a new line") #adds to the file


# f.close()

# f = open("demo.txt","r+")
# f.write("abc")
# print(f.read())
# f.close()

# f = open("demo.txt","w+")
# f.write("abc")
# print(f.read())
# f.close()

f = open("demo.txt","w+")
f.write("abc")
print(f.read())
f.close()