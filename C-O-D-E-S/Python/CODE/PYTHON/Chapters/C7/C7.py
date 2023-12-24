#---> LOOPS


#-> 1) While loop
'''
i=0
while i<10:
    print(i)
    i=i+1
'''

#-> Quick Quiz
'''
i=1
while i<=50:
    print(i)
    i=i+1
'''

#-> Quick Quiz
'''
names = ["Pranav" , "Kumar" , "Kusum" , "Shravanee" , "Indubai" , "Santosh"]
i=0
while i<len(names):
    print(names[i])
    i=i+1
'''


#-> 2) For loop
'''
l = ["One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten"]
for item in l:
    print(item)
'''

#-> Range Function  -> used to generate a sequence of numbers.
'''
for i in range(10):        #-> this will print numbers from 0 to 9(n-1)
    print(i)
'''

'''
for i in range(1,6):      #-> this will print from 1 to 5(n-1)
    print(i)
'''

'''
for i in range(1,10,2):   #-> this will print 1,3,5,7,9(n-1) because the step size is of '2'
    print(i)
'''

#-> For loop with else
'''
for i in range(10):
    print(i)
else:                       #-> when the for loop is completely finished successful the else-matter is printed.
    print("Finish")
'''


#-> Break Statement
'''
for i in range(10):
    print(i)
    if i==5:
        break          #-> It will not print the further part and break the loop and stop
'''

'''
for i in range(10):
    print(i)
    if i==5:
        break  

else:                 #-> this will not print because the for loop has not been successfully completed
    print("Finish")
'''

#-> Continue Statement
'''
for i in range(10):
    if i==5:
        continue  #-> this will not print the only particular iteration and again execute the remaining loop if left 
    print(i)
'''


#-> Pass Statement
'''
i=17
if i>0:
    pass       #-> this will do nothing or pass the condition
print("Done")
'''