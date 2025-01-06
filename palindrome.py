def is_palindrome(number):
    num_str = str(number)
    return num_str == num_str[::-1]
    
num = int(input("Enter a number:"))
if is_palindrome(num):
    print("The number is palindrome")
else:
    print("The number is not palindrome ")