def full_name(first ,last):
    name = f"{first} {last}"
    return name


# name = full_name("lamia","islam")
name = full_name(last="islam",first="lamia")
print(name)

def famous_name(first,last,**addition):
    name = f"{first} {last}"
    for key,value in addition.items():
        print(key,value)
    return name

name = famous_name(first="Rakib", last="Hossen" , title="Developer", addition="Student")
print(name)

def a_lot(num1, num2):
    sum = num1 + num2
    mul = num1 * num2
    remain = num1 - num2
    return sum, mul, remain

everything = a_lot(55,21)
print(everything)