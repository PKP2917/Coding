#---> LISTS AND TUPLES


#--> LIST


#-> Creating a List 
'''
#-> creating a list using  '[ ]'
a = [1,2,3,4]    #-> List Indexing start from 0.
print(a)         #-> print the list using print(list_name) function.
print(a[0])      #-> printing a specific char at a specific index number.
print(a[1])
print(a[2])

a[2] = 100       #-> changing the value of the char at index no 2 before printing
print(a[2])
print(a[3])
'''

# Creating a list with items of different data types
'''
b = [17 , "Pranav" , True , 29.10]
print(b)
print(b[0])
print(b[1])
print(b[2])
print(b[3])
'''

# List Slicing
'''
c = ["Pranav" , "Patil" , 17 , 29.10]
print(c)
print(c[0:2])      #-> The char on index no 0,1 will be printed excluding the char on index no 2.
print(c[-4:-1])    #-> Negative Slicing
'''

# List Methods

#-> 1) list.sort()           -> it sorts the list in ascending order.
'''
l = [9,17,29,10,7]
print(l)
l.sort()       #-> it sorts the 'l' list
print(l)
'''

#-> 2) list.reverse()        -> it reverses the given list
'''
r = [7,8,9,11,10]
print(r)
r.reverse()    #-> it reverses the 'r' list
print(r)
'''

#-> 3) list.append(x)       -> it adds 'x' at the end of the list
'''
a = [1,2,3,4,5,6,7,8,9]
print(a)
a.append(10)    #-> it adds '10' in the given list
print(a)
'''

#-> 4) list.insert(x,y)      -> this will add 'y' at index number 'x'
'''
i = [1,2,3,4,5,6,7]
print(i)
i.insert(7,10)  #-> it will add '10' at index number 7 in the 'i' list
print(i)
'''

#-> 5) list.pop(x)          -> this will pop/remove the char from index number 'x' from the list
'''
p = [1,2,3,4,5,6,7,8,9,10]
print(p)
p.pop(5)        #-> it will remove '6' which it as 5th index in the 'p' list
print(p)
'''

#-> 6) list.remove(x)       -> this will remove the char 'x' from the given list
'''
r = [1,2,3,4,5,6,7,8,9,10]
print(r)
r.remove(6)     #-> it will remove '6' from the 'r' list
print(r)
'''


#--> TUPLES

#-> Creating a Tupple
'''
#-> creating a tuple using  '( )'
t = (1,2,3,4)    #-> Tuple Indexing start from 0.
print(t)         #-> print the tuple using print(tuple_name) function.
print(t[0])      #-> printing a specific char at a specific index number.
print(t[1])
print(t[2])
#-> we cannot change or update the char values in the tupple
#-> t[2] = 100   ->(This will produce error.)
print(t[2])
print(t[3])
'''

#-> Rules for defining tuples.
'''
a()       -> empty tuple
a(1)      -> wrong way to declare a tuple with single element. 
a(1,)     -> tuple with one element needs a comma(' , ') 
a(1,2,3)  -> tuple with one or more element
'''

#-> Tuple Methods

#-> 1) tuple.count(x)    -> it will return number of times 'x' is occured in the tuple
'''
c = (1,2,1,7,1,1,17,1,1,4,5,) 
print(c)
print(c.count(1))
'''

#-> 2) tuple.index(x)   -> it will return the index of first occurence of 'x' in the tuple.
'''
i = (1,2,3,7,17)
print(i)
print(i.index(17))  
'''