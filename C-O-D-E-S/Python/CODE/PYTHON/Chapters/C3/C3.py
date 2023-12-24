#---> STRINGS


#-> Method 1
# a = "Pranav"
# print(a)
# print(type(a))

#-> Method 2
# b = 'Sanjana'
# print(b)
# print(type(b))

#-> Method 3
# c = '''Kusum'''
# print(c)
# print(type(c))


# String Concatination

'''
greeting="Good Morning, "
name="Pranav"
print(greeting + name)
'''

'''
greeting="Good Morning, "
name="Pranav"
c=greeting + name
print(c)
'''


# String Slicing

'''
name= "Pranav"
print(name[0])
print(name[0:3])   # the char on index no 0,1,2 will be printed excluding the char on index no 3.
print(name[ :2])   # from IN(Initial) to IN(2)
print(name[1: ])   # from IN(1) to IN(Last)

print(name[-1])    #  Negative Index -> the indexing is done in reverse order from last as -1...
'''


# String Slicing with skip value

'''
name = "Pranav Kumar Patil"
print(name)
print(name[1:10:2])    # here '2' shows that it will skip every 2nd char in the give slice of string.
'''

# String Functions


# 1) len(string)            -> Gives the length of the string
'''
fact = "Messi is the greatest of all time. He is really a once in a lifetime player."
print(fact)
print(len(fact))
'''

# 2) string.endswith("xxx") ->  Tells whether the string ends with the given slice of string("xxx").
'''
fact = "Messi is the greatest of all time. He is really a once in a lifetime player."
print(fact.endswith("player."))      # returns true if it ends with the same slice of string.
print(fact.endswith("dsdssd"))       # returns false if it does not ends with the same slice of string.
'''

# 3) string.count("x")      -> count the number of times the char 'x' is their in the main string
'''
fact = "Messi is the greatest of all time. He is really a once in a lifetime player."
print(fact)
print(fact.count("a"))
'''

# 4) string.capitalize()    -> It capitalizes the first alphabet of the main string.
'''
fact = "messi is the greatest of all time. He is really a once in a lifetime player."
print(fact)
print(fact.capitalize())
'''

# 5) string.find("xxx")          -> finds that word and returns the index of first occurence of that word in string.
'''
fact = "Messi is the greatest of all time. He is really a once in a lifetime player."
print(fact)
print(fact.find("is"))
'''

# 6) string.replace(old_word , new_word)   -> replaces the old word with new word
'''
fact = "Messi is the greatest of all time. He is really a once in a lifetime player."
print(fact)
print(fact.replace("greatest" , "GOD"))
'''


# Escape Sequence Characters

'''
1) \n -> newline
2) \t -> tab
3) \' -> single quote
4) \\ -> backslash
'''