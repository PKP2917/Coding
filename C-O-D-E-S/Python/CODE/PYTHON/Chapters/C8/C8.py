#---> FUNCTIONS AND RECURSION


#--> Function

'''
def percent(marks):
    p=((marks[0] + marks[1] + marks[2] + marks[3])/400)*100
    return p

marks1 = [24,45,6,7]
percentage1 = percent(marks1)

marks2 = [43,44,16,17]
percentage2 = percent(marks2)

print(percentage1,percentage2)
'''

#-> Quick Quiz
'''
def greet(name):
    print("Have a Good Day, " + name)
greet("Pranav")
'''
'''
def mysum(n1 , n2):        #-> function with arguements.
    return n1+n2
s = mysum(17,33)
print(s)
'''

#-> Default Arguements(Parameter Value)   
'''
def greet(name="Stranger"):
    print("Have a Good Day, " + name)
greet("Pranav")     #-> this will use the passed parameter value i.e "Pranav".
greet()             #-> this will use the default parameter value i.e "Stranger".
'''


#--> Recursion   -> It is a function which calls itself.


#-> Factorial of a number
'''
def factorial_iter(n):
    product = 1
    for i in range(n):
        product = product * (i+1)
    return product

f = factorial_iter(5)
print(f)
'''

'''
def factorial_recursive(n):
    if n==1 or n==0:
        return 1
    return n*factorial_recursive(n-1)

f = factorial_recursive(6)
print(f)
'''