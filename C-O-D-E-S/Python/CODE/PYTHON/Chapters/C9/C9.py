#---> FILE I/O


'''
Types of Files :-
    1) Text File  -> (.txt , .c)
    2) Binary File -> (.jpg , .dat)
'''

#-> Opening a File
'''
# f = open('C9_1.txt', 'r')      #-> Use 'open' function to read the content of a file.
f = open('C9_1.txt')             #-> By default the mode is 'r'.
# data = f.read()        #-> reads all the contents of the file.
data = f.read(9)       #-> Only reads the first nine characters from the file
print(data)
f.close()
'''

#-> To Read one line at a time
'''
f = open('C9_1.txt')
#-> Read the first line
data = f.readline()
print(data)
#-> Read the second line
data = f.readline()
print(data)
#-> Read the third line and so on....
data = f.readline()
print(data)
'''

#-> Modes of Opening a file
'''
r -> Open for reading
w -> Open for writing
a -> open for appending
+ -> open for updating
'''


#-> Writing Files 
'''
f = open('C9_2.txt','w')      #-> this will create and open another txt file named 'Chapter_9_2'.
f.write("Hi, Pranav ")   #-> this will write this content in that file which we have created and opened and 
f.write("Hi, Pranav ")   #-> can be called multiple times, by writing the arguement multiple times.
f.write("Hi, Pranav ")
f.close()
'''

#-> Appending the File
'''
f = open('C9_2.txt','a')        #-> this will append(add) the given content in the file we created.
f.write(". I am appending this file")  #-> can be called multiple times by just printing this arguement multiple times 
f.close()
'''

#-> 'with' statement
'''
with open('C9_2.txt','r') as f:   #-> no need to write f.close() as it is done automatically.
    a = f.read()
print(a)

with open('C9_2.txt','w') as f:
    a = f.write("Hi")
print(a)
'''