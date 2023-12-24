#-> Practice Set


#-> Q.1)
'''
name = input("Enter your name : ")
marks = input("Enter your marks : ")
phone = input("Enter your phone number : ")

template = "The name of the student is {}, his marks are {} and phone number is {}."
output = template.format(name,marks,phone)
print(output)
'''


#-> Q.2)
'''
l = [str(i*7) for i in range(1,11)]

verticleTable = "\n".join(l)
print(verticleTable)
'''


#-> Q.3)
'''
l = [1,2,3,4,5,6,7,8,9,10,11,15,17,25,45]

a = filter(lambda a : a%5==0,l)
print(list(a))
'''


#-> Q.4)
'''
from functools import reduce
l = [3,5,6,8,2,1,2,17]

a = reduce(max,l)
print(a)
'''


#-> Q.5)
'''
from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello():
    return "Hello, World!"

if __name__ == "__main__":
    app.run(debug=True)
'''