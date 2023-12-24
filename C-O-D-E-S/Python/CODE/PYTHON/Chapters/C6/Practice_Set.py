#-> Practice Set

#-> Q.1)
'''
n1 = int(input("Enter number 1 : "))
n2 = int(input("Enter number 2 : "))
n3 = int(input("Enter number 3 : "))
n4 = int(input("Enter number 4 : "))

print("-------------------------")

if((n1>n2)and(n1>n3)and(n1>n4)):
    print("Greatest Number : ",n1)
elif((n2>n1)and(n2>n3)and(n2>n4)):
    print("Greatest Number : ",n2)
elif((n3>n1)and(n3>n2)and(n3>n4)):
    print("Greatest Number : ",n3)
else:
    print("Greatest Number : ",n4)

print("-------------------------")
'''

#-> Q.2)
'''
m1 = int(input("Enter the marks in Maths : "))
m2 = int(input("Enter the marks in Science : "))
m3 = int(input("Enter the marks in History : "))

p = (m1+m2+m3)/3

if((m1>33) and (m2>33) and (m3>33) and (p>40)):
    print("Total : ",p)
    print("PASS")

else:
    print("Total : ",p)
    print("FAIL")
'''

#-> Q.3)
'''
a = "Pranav"

if(len(a)>10):
    print("No")
else:
    print("Yes")
'''

#-> Q.4)
'''
a = ["pranav" , "kusum" , "kumar"]
print(type(a))
name = input("Enter your name : ")

if name in a:
    print("Yes")

else:
    print("No")
'''