#---> VARIABLES AND DATA-TYPES


'''
DATA-TYPES
    1) Integers (int)
    2) Float (float)
    3) String (str)
    4) Boolean (bool)
    5) None (None)
'''

#-> String
# a = "Pranav"       #-> method 1
# b = 'Pranav'       #-> method 2
# c = '''Pranav'''   #-> method 3

#-> Integer
# d = 17

#-> Float
# e = 17.29

#-> Boolean
# f = True
# g = False

#-> None
# h = None


# Printing the variables :-
'''
print("Variables :-")
print(a)
print(b)
print(c)
print(d)
print(e)
print(f)
print(g)
print(h)
'''

# print("---------------------------------------------------")

#-> OPERATORS IN PYTHON

'''
Arithmetic Operators :-  + , - , * , /

print("------------------------------------------")
print("Arithmetic Operators :-")
print("------------------------------------------")

a = 10
b = 5
print("The value of a+b is ",a+b)
print("The value of a-b is ",a-b)
print("The value of a*b is ",a*b)
print("The value of a/b is ",a/b)
print("------------------------------------------")
'''

'''
Asssignment Operators :-  = , += , -= , *= , /=

print("------------------------------------------")
print("Asssignment Operators :-")
print("------------------------------------------")

a = 10
b = 17
c = 5
d = 10
print("The value of a was ",a)
print("The value of b was ",b)
print("The value of c was ",c)
print("The value of d was ",d)
print("------------------------------------------")

a += 1
b -= 10
c *= 10
d /= 2
print("The value of a is ",a)
print("The value of b is ",b)
print("The value of c is ",c)
print("The value of d is ",d)
print("------------------------------------------")
'''

'''
Comparison Operators :-  == , > , < , <= , >= , !=

print("------------------------------------------")
print("Comparison Operators :-")
print("------------------------------------------")

a = 10
b = 17
print("The value of a>b is",a>b)
print("The value of a<b is",a<b)
print("The value of a>=b is",a>=b)
print("The value of a<=b is",a<=b)
print("The value of a==b is",a==b)
print("The value of a!=b is",a!=b)
print("------------------------------------------")
'''

'''
Logical Operators :-  and , or , not

a = 10
b = 17
print("------------------------------------------")
print("Logical Operators :-")
print("------------------------------------------")
print("The value of (a>b)and(a>=b) is ",(a>b)and(a>=b))
print("The value of (a>b)or(a>=b) is ",(a>b)or(a>=b))
print("The value of not(a>=b) is ",not(a>=b))
print("------------------------------------------")
'''


#-> TYPECASTING  

'''
a=100
b=100.90
c="1234"

print(float(a))       #-> typecasting of int(a) into float(a).
print(int(b))         #-> typecasting of float(b) into int(b).
print(int(c)+a)       #-> typecasting of str(c) into int(c).
'''


#-> type() FUNCTION

'''
a = "Pranav"      
b = 'Pranav'       
d = 17
e = 17.29
f = True
g = False
h = None

print("Type of Variables :-")
print(type(a))
print(type(b))
print(type(d))
print(type(e))
print(type(f))
print(type(g))
print(type(h))
'''


#-> input() FUNCTION

'''
a=input("Enter you name : ")    # it will only take string as a input, we can change the type of it later.
a=int(a)                        # converting a to an integer(if possible)
print(a)
print(type(a))
'''