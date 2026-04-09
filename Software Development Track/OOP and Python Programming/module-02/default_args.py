def sum (num1, num2,num3=0):
    result = num1+num2+num3
    return result

total = sum(99,11)
# print("Total:" , total)


def all_sum (num1,num2,*numbers):
    sum = 0
    for num in numbers:
        print(num)
        sum = sum+ num
    return sum

total = all_sum(45,88,99,11)
print("all sum:" , total)