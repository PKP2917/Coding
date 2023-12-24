#-> Practice Set


#-> Q.1)
'''
l = [1,2,3,4,5,6,7,8,9]

for index, item in enumerate(l):
    if index == 2 or index == 4 or index == 6:
        print(f"The {index + 1}th element is {item}")
'''

#-> Q.2)
'''
num = (int(input("Enter the Number : ")))

table = [num * i for i in range(1,11)]
print(table)
'''

#-> Q.3)
'''
a = (int(input("Enter the Number a : ")))
b = (int(input("Enter the Number b : ")))

try:
    print(a/b)
except:
    print("Infinite")
'''

#-> Q.4)
'''
num = (int(input("Enter the Number : ")))

table = [num * i for i in range(1,11)]
print(str(table))

with open("table.txt" , "a") as f:
    f.write(str(table))
    f.write("\n")
'''