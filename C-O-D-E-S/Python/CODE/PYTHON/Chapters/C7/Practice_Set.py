#-> Practice Set


#-> Q.1)
'''
n = int(input("Enter the number : "))
for i in range(1,11):
    print(str(n) + " X " + str(i) + " = " + str(i*n)) 
'''

#-> Q.2)
'''
l = ["Pranav" , "Shreyash" , "Shravanee" , "Kusum"]

for name in l:
    if(name.startswith("S")):
        print("Hello " + name)
'''

#-> Q.3)
'''
n = int(input("Enter the Number : "))

prime=True
for i in range(2,n):
    if((n%i)==0):
        prime=False
        break

if prime:
    print("Prime Number")
else:
    print("No Prime Number")
'''

#-> Q.4)
'''
n = int(input("Enter the Number : "))
f=1

for i in range(1,n+1):
    f=f*i

print("Factorial : ",f)
'''

#-> Q.5)
'''
n=4
for i in range(4):
    print("*" * (i+1))
'''

#-> Q.6)
'''
n=3
for i in range(3):
    print(" " * (n-i-1),end="")
    print("*" * (2*i-1),end="")
    print(" " * (n-i-1))
'''