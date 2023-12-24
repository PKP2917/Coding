#---> ADVANCED PYTHON - 1


#-> Exception Handling
'''
while(True):
    print("Press q to quit")
    a = input("Enter a number : ")
    if a == 'q':
        break
    try:
        print("Typing...")
        a = int(a)
        if a>6:
            print("You entered a number greater than 6")
    except Exception as e:
        print(f"Your input resulted in an error: {e}")

print("Thanks for playing this game...")
'''


#-> Handling Different/multiple Exception
'''
try:
    a=int(input("Enter a Number : "))
    c = 1/a
    print(c)

except ValueError as e:
    print("Please enter a valid value...") 
    print(e)

except ZeroDivisionError as e:
    print("Make sure ypu are not dividing by 0...")
    print(e)
'''


#-> Raising Exception

'''
def increment(num):
    try: 
        return int(num)+1
    except:
        raise ValueError("This is not good")

a = increment(456)
print(a)
'''


#-> try with else clause

'''
try:
    i = int(input("Enter a number : "))
    c=1/i
    
except Exception as e:
    print(e)
else:
    print("we were successful")
'''


#-> try with finally

'''
try:
    i = int(input("Enter a number : "))
    c=1/i
    
except Exception as e:
    print(e)
finally:
    print("we were done")
'''


#-> Global Keyword

'''
a=17      # Global variable

def func():
    global a
    print(f"State 1 : {a}")
    a = 8         # Local variable
    print(f"State 2 : {a}")

func()
print(f"State 3 : {a}")
'''


#-> Enumerate Function

'''
list = [17 , "Pranav" , 12000.29]

for index, item in enumerate(list):
    print(index,item)
'''


#-> List Comprehension

'''
a = [1,3,5,2,4,6]

b = [i for i in a if i%2==0]
print(b)
'''


#-> Set Comprehension

'''
t = [1,2,4,1,4,2,3,5,6,4,3,2,1]

s = {i for i in t}
print(s)
'''
