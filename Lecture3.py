# list = [2, 1, 3]
# print(list.sort())   
# print(list)  
# print(list.sort(reverse = True))

# tup = (1,2,3,4,2)
# print(tup.index(4))

#To ask user to enter the name of their 3 favorite movies and store them in a list
# movies = []
# a = input("Enter the name of your first favourite movie:")
# b = input("Enter the name of your second favourite movie:")
# c = input("Enter the name of your third favourite movie:")

# movies.append(a)
# movies.append(b)
# movies.append(c)
# print(movies)

#to check if list is palindrome or not
check = []

a = input("Enter the name of your first element:")
b = input("Enter the name of your second element")
c = input("Enter the name of your third element:")
d = input("Enter the name of your fourth element:")

check.append(a)
check.append(b)
check.append(c)
check.append(d)

copy_list = check.copy()
# if (check == check[::-1]):
#     print("the list is palindrome")
# else:
#     print("the list is not palindrome")

if (check == copy_list):
    print("the list is palindrome")
else:
    print("the list is not palindrome")