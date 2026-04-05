# in , not , not in , is , is not
# > , < , >= , <= , ==, !==


a = 2
if a >  5:
    print("5 er beshi")
elif a > 3:
    print("Olpo boro")
elif a == 2:
    print("ekdom soman")
else:
    print("5 er chotto")

boss = True

# if boss is True:
#     print("Boss going to cox bazaar")
# else:
#     print("Boss not going to cox bazaar")

if boss is not True:
    print("Boss not going to cox bazaar")
else:
    print("Boss going to cox bazaar")


# nested condition

coin = "head"
if boss == True:
    print("boss you are joss")
    if coin == "tail":
        print("batting")
    else:
        print("Bowling")
        if 5 > 2 or boss != True:
            print("Do something")
            if 8%2 == 0 and 5%2 == 1:
                print("Even 8 is an even number")
else:{
    print("you are loss not boss")
}