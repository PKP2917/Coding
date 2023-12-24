#---> ADVANCED PYTHON - 2


#-> Virtual Environment
'''
Virtual Environment :-
    An environment which is same as the system interpreter but is isolated from the other python environments on the system.

Installation :-
    Run command on terminal -> "pip install virtualenv"

Creating a new Virtual Environment :-
    "virtualenv myprojectenv"

Activating Virtual Environment :-
    ".\myprojectenv\Scripts\activate.ps1"

Deactivating Virtual Environment :-
    "deactivate"
'''


#-> Lambda Functions
'''
Functions are created using an expression using lambda keyword
Syntax :      lambda arguements : expressions
'''

'''
func = lambda a : a+17
sqr = lambda x : x*x
sum = lambda a,b,c : a+b+c

x = 29
print(func(x))
print(sqr(x))
print(sum(x,2,3))
'''


#-> Join Method (Strings) -> creates a string from iterble objects.
'''
l = ["Laptop" , "Phone" , "Charger"]

sentence = " and ".join(l)
print(sentence)
print(type(sentence))
'''


#-> Format Method (Strings) -> formats the value inside the string into  desired output
'''
name = "Pranav"
a = "This is {}".format(name)
print(a)
'''


#-> Map Function -> It applies a function to all the items in an input_list
'''
def sqr(num):
    return num*num

l = [1,2,3,4,5,6,7,8,9,10]

print(list(map(sqr,l)))
'''


#-> Filter Function -> Filter creates a list of items for which the function return true
'''
def con1(num):
    if num > 6:
        return True
    else:
        return False

con2 = lambda num : num>2

l = [1,2,3,4,5,6,7,8,9,10]

print(list(filter(con1 , l)))
print(list(filter(con2 , l)))
'''


#-> Reduce Function -> It applies a rolling computation to sequential pair of elements
'''
from functools import reduce

sum = lambda a,b : a+b

l = [1,2,3,4,5,6,7,8,9,10]

val = reduce(sum,l)
print(val)
'''