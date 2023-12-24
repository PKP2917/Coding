#---> DICTIONARY AND SETS


#-> Dictionary  -> It is a set of key-value pairs. It is unordered. It cannot contain duplicate values instead it will overrite the initial value. 
'''
mydict = {
    "Kumar" : "Father",
    "Kusum" : "Mother",
    "Pranav" : "Son",
    "Shravanee" : "Daughter",
    "bday" : (17,28,29,8),  #-> we can us '( )' , '[ ]' , '{ }' for inserting a list in a dictionary.
    "bday" : [17,28,29,8],
    "bday" : {17,28,29,8},
}

print(mydict["Kumar"])      #->  we can call it in double quote
print(mydict['Kusum'])      #->  we can also call it in single quote 
print(mydict["Pranav"])
print(mydict['Shravanee'])
print(mydict['bday'])
mydict={"bday" : [17,28,8]}   #-> It is mutable(we can change the value of respective keys).
print(mydict['bday'])

'''

#-> Dictionary under a global dictionary
'''
dict = {
    "p1" : "Messi",
    "p2" : "Neymar",
    "p3" : "Suarez",
    "p4" : "Cristiano",

    "dict1" : {              #-> dictionary under a global dictionary
        "n_p1" : "10",
        "n_p2" : "11",
        "n_p3" : "09",
        "n_p4" : "07",
    }
}

print("--------------")
#-> printing the value of 'p1' key int the 'dict' dictionary(global) 
print(dict['p1'])            
#-> Nested Dictionary ---> printing the value of 'n_p1' key of a local dictionary 'dict1' defined and called under global dictionary 'dict' 
print(dict['dict1']['n_p1'])
print("--------------")
print(dict['p2'])
print(dict['dict1']['n_p2'])
print("--------------")
print(dict['p3'])
print(dict['dict1']['n_p3'])
print("--------------")
print(dict['p4'])
print(dict['dict1']['n_p4'])
print("--------------")
'''

#-> Dictionary Methods

#-> 1) dict.keys() : 
'''
dict = {
    "1" : "Messi",
    "2" : "Maradona",
    "3" : "Critiano",
    "4" : "Neymar",
    "5" : "Suarez",
    "dict1" : {"7" : "Ramos" , "8" : "Iniesta"},
    6 : 9,   #->  we can write the (int,int) key value pair without any quotes.
}

print(dict.keys())         #-> Prints all the keys of the dictionary.
print(list(dict.keys()))   #-> Prints all the keys of the dictionary in the format of list ie. ->  [ ].
print(tuple(dict.keys()))  #-> Prints all the keys of the dictionary in the format of tuple ie. ->  ( ).
'''

#-> 2) dict.values() :
'''
dict = {
    "1" : "Messi",
    "2" : "Maradona",
    "3" : "Critiano",
    "4" : "Neymar",
    "5" : "Suarez",
    "dict1" : {"7" : "Ramos" , "8" : "Iniesta"},
    6 : 9,   #->  we can write the (int,int) key value pair without any quotes.
}

print(dict.values())         #-> Prints all the values of the dictionary.
print(list(dict.values()))   #-> Prints all the values of the dictionary in the format of list ie. ->  [ ].
print(tuple(dict.values()))  #-> Prints all the values of the dictionary in the format of tuple ie. ->  ( ).
'''

#-> 3) dict.items() : 
'''
dict = {
    "1" : "Messi",
    "2" : "Maradona",
    "3" : "Critiano",
    "4" : "Neymar",
    "5" : "Suarez",
    "dict1" : {"7" : "Ramos" , "8" : "Iniesta"},
    6 : 9,   #->  we can write the (int,int) key value pair without any quotes.
}

print(dict.items())          #-> Returns a list of (key,value) tuple-> '( )'.
print(list(dict.items()))    #-> Returns a list of (key,value) tuple in the format of list ie. ->  '[ ]'.
print(tuple(dict.items()))   #-> Returns a list of (key,value) tuple in the format of tuple ie. ->  '( )'.
'''

#-> 4) dict.update({"X" : "Y"}) :    
'''
dict = {
    "1" : "Messi",
    "2" : "Maradona",
    "3" : "Critiano",
    "4" : "Neymar",
    "5" : "Suarez",
    "dict1" : {"7" : "Ramos" , "8" : "Iniesta"},
    6 : 9,   #->  we can write the (int,int) key value pair without any quotes.
}

print(dict)
print(dict.update({"9" : "Xavi" , "10" : "Pele"}))       #-> updates the dictionary with supplied key-value pair(inserts).
print(dict)
'''

#-> 5) dict.get(x) : 
'''
dict = {
    "1" : "Messi",
    "2" : "Maradona",
    "3" : "Critiano",
    "4" : "Neymar",
    "5" : "Suarez",
    "dict1" : {"7" : "Ramos" , "8" : "Iniesta"},
    6 : 9,   #->  we can write the (int,int) key value pair without any quotes.
}

print("----------------------------------------------------------------------------------")
print(dict.get("1"))     #-> Returns the value at key "1" from the 'dict' dictionary 
print("----------------------------------------------------------------------------------")

print("----------------------------------------------------------------------------------")
print(dict.get("10"))    #->  Prints the value associated with key "10".
print(dict["10"])        #->  Prints the value associated with key "10".
print("----------------------------------------------------------------------------------")

print("----------------------------------------------------------------------------------")
#->  The difference between .get() and [ ] syntax in dictionaries
print(dict.get("11"))    #-> Returns none as "11" is not present in the dictionary.
print(dict["11"])        #-> Throws an error as "11" is not present in the dictonary.
print("----------------------------------------------------------------------------------")
'''

#-> IMPORTANT

# a = {}    -> empty dictionary.
# b = set() -> empty set.


#-> SETS     -> It is a collection of non-repetetive items. They are unordered and unindexed and immutable.

#-> Set create
'''
a = {1,2,3,4,1}      #-> '1' will only print once because of the characteristics of the sets.
print(type(a))
print(a)
'''

#-> Set Methods

#-> 1) set.add() :
'''
a=set()                #-> empty set
print(type(a))
print(a)

a.add(1)               #-> adding values to an empty set.
a.add(2)
a.add(1)               #-> '1' will be added only once bcz sets are non-repetitive.and

# a.add([6,7,8])       #-> we cannot add list to the set bcz it is mutable. 
# a.add({2:3})         #-> we cannot add dictionary to the set bcz it is mutable.
a.add((1,2,3))         #-> we can add tuple to the set.

print(a)
'''

#-> 2) len(set)
'''
a = {1,2,3,4}
print(a)
print(len(a))
'''

#-> 3) set.remove(x)
'''
a = {17,19,6,10}
print(a)
a.remove(17)
print(a)
'''

#-> 4) set.pop(x)   -> removes an arbitary element from the set and returns the removed element
'''
a = {12,34,56,78,90}
print(a.pop())
'''

#-> 5) set.clear()   -> empties the set
'''
a={1,2,3,4}
print(a)
a.clear()
print(a)
'''

#-> 6) set.union({x,y})   -> returns a new set with all items from both sides.
'''
a={1,2,3,4,5}
print(a.union({1,9,89,3,56}))   #-> it will return the items which are in set a and given set{1,9,89,3,56}.
'''

#-> 7) set.intersection({x,y})   -> returns a new set which contains only items in both sides.
'''
a={10,17,29}
print(a.intersection({10,17,19,33}))
'''