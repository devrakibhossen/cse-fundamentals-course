def doubled(x):
    return x *2


result = doubled(44)
# print(result)


double_it = lambda x:x*2
square = lambda x : x * x
# print(double_it(5))
# print(square(5))

add = lambda x,y : x+y
# print(add(100,50))


numbers = [12,56,98,78,56,12,6,98]

# doubled_nums = list(map(double_it,numbers))
doubled_nums = list(map(lambda x:x*2,numbers))

# print(doubled_nums)

actors = [
    {"name":"Keya", "age":27},
    {"name":"Nagrin", "age":20},
    {"name":"Sakib", "age":40},
    {"name":"Jovan", "age":35}
]

actors_list = filter(lambda actor : actor["age"]  < 40,actors)
print(list(actors_list))