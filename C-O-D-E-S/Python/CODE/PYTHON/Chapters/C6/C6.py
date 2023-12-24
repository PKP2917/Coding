#---> CONDITIONAL EXPRESSIONS


#-> If-elif-else ladder
'''
a=10
if(a>7):
    print("The value of a is greater than 7.")

elif(a<17):
    print("The value of a is smaller than 17.")

else:
    print("Thank you")
'''

#-> Multiple if statement
'''
a=9
if(a>7):                                         #-> this is separate if statement
    print("The value of a is greater than 7.")

if(a<10):                                        #-> this is separate if statement
    print("The value of a is smaller than 10.")

if(a<17):                                         #-> this is now a if-else ladder.
    print("The value of a is smaller than 17.")
else:
    print("Thank you")
'''

#-> Quick Quiz
'''
age = int(input("Enter the age : "))

if(age>=18):
    print("YES")
else:
    print("NO")
'''