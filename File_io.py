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

# f = open("demo.txt","a+")
# # f.write("abc")
# print(f.read())
# f.write("abc")
# f.close() 

# with open("demo.txt","r") as f:
#     data = f.read()
#     print(data)

# with open("demo.txt","w") as f:
#     f.write("this new")

# import os
# os.remove(sample.txt)

# with open("sample.txt","w") as f:
#     f.write("hi\ni am polu\ni am in 3rd year\ngood day")
   
# with open("sample.txt","r") as f:
#     data = f.read()
    
# new_data = data.replace("am", "us") 
# print(new_data)
   
# with open("sample.txt","w") as f:
#     f.write(new_data)


# def check_for_word():
#     word = "pallavi"
#     with open("sample.txt", "r") as f:
#         data = f.read()
#         if (data.find(word) != -1):
#             print("found")
#         else:
#             print("NA")

def check_for_line():
    word = "pallavi"
    with open("sample.txt", "r") as f:
        data = f.read()
        if (data.find(word) != -1):
            print("found")
        else:
            print("NA")

    