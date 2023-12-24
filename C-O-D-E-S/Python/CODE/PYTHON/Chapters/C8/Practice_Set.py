#-> Practice Set


#-> Q.1)
'''
def gn(n1,n2,n3):
    if((n1>n2) and (n1>n3)):
        return n1
    elif((n2>n1) and (n2>n3)):
        return n2
    else:
        return n3

g = gn(17,29,33)
print("Greatest Number : ",g)
'''

#-> Q.2)
'''
def tc(c):
    return c*(9/5) +32

c=tc(46)
print("Fahrenheit Temperature : ",c)
'''

#-> Q.3)
'''
def sum_recursive(n):
    if n==0:
        return 0
    return n + sum_recursive(n-1)

s=sum_recursive(4)
print(s)
'''

#-> Q.4)
'''
print("Hi ", end="")      #-> This is used to prevent new line
print("Pranav, ", end="")
print("How are You?", end="")
'''

#-> Q.5)
'''
n = int(input("Enter the Number : "))

for i in range(n):
    print("*" * (n-i))
'''

#-> Q.6)
'''
def ci(i):
    return i*2.54

c = ci(10)
print(c)
'''

#-> Q.7)
'''
def rel(string , word):
    newstr = string.replace(word,"")
    return newstr.strip()

p = "   pranav Kumar Patil"
n = rel(p, "pranav")
print(n)
'''

#-> Q.8)
'''
def mult(n):
    for i in range(1,11):
        print(f"{i} X {n} = {i*n}")

m = mult(10)
print(m)
'''