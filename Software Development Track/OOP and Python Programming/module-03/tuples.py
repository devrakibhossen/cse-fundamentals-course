things = 'pen', 'tripod', 'water bottle',"charger", "phone", "web cam", "sunglass"

print(things)
print(things[0])
print(things[3:6])

if 'phone' in things:
    print("exists")


# things[0] = 'wagon'
# print(things)

print(len(things))
mega = ([2,3,4],[6,8,9,5])
mega[0][1] = 666
print(mega)