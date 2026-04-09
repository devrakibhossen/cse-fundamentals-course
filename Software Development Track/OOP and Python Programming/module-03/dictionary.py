numbers = [12,56,98,78,56,12,26,98]

person = {
    "name": "Rakib",
    "address":"Cumilla",
    "age": 20,
    "job" : "Software Engineer"
}

print(person)
print(person["job"])
print(person.keys())
print(person.values())
person["language"] = "python"
person["name"] = "Rakib Hossen"
del person["age"]
print(person)

for key, value in person.items():
    print(key, value)

