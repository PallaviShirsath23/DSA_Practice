def count_digits(number):
    
    number = abs(number)
    
    digit_count = len(str(number))
    
    return digit_count


num = int(input("Enter a number: "))
print(f"The number of digits in {num} is {count_digits(num)}.")