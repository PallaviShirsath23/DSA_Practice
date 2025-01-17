# a = 5
# b = 10
# sum = a + b
# print (sum)

# a = 3
# b = 10
# sum = a + b
# print (sum)

# a = 2
# b = 30
# sum = a + b
# print (sum)

# def calc_sum(a,b):
#     sum = a+b
#     print(sum)
#     return sum

#average of three numbers

# a = int(input("Enter the first number:"))
# b = int(input("Enter the second number:"))
# c = int(input("Enter the third number:"))

# def average():
#     a = int(input("Enter the first number:"))
#     b = int(input("Enter the second number:"))
#     c = int(input("Enter the third number:"))

#     sum = a+b+c
#     avg = sum/3
#     print("The average of the three numbers is:",avg)
#     return average

# average()

#WAF to print the length of the list

# list = [1,2,3,4,5,6,7,8,9]
# nums = [1,2,3,4,5,6,7,8,9]

# def lengthOfList(list):
#     length = len(nums)
#     print("The length of the given list is :", length)
#     return length

# lengthOfList(nums)
  
#WAF to print the elements of a list in a single line. ( list is the parameter)



# def singleLine(list):
#     for el in list :
#         print(el, end =" ")
         
# singleLine([1,2,3,4,5,6,7,8,9])
    
      
#WAF to find the factorial of n. (n is the parameter)

# def factorial(n):
#     fact = 1
#     for i in range (1,n+1):
#         fact *= i
#     print("Factorial of a number is :", fact)     
#     return fact
     
# factorial(5)


#WAF to convert USD to INR.

# def conversion(USD):
#     INR_val = USD * 83
#     print(USD,"USD =", INR_val, "INR")
#     return INR_val

# conversion(3)


#homework

# def odd_even():
#     num = int(input("Enter a number:"))
#     if num % 2 == 0:
#         print("The number is EVEN")
#     else:
#         print("The number is ODD")

# odd_even()

 # RECURSION
 
def show(n):
    if(n == 0):
        return  
    print(n)
    show(n-1)
    
     
show(5)


