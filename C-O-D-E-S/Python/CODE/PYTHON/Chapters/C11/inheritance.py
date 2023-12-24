
#--> INHERITANCE

'''
Inheritance -> Inheritance is a way of creating a new class from an existing class.

Types of Inheritance ->

    1) Single Inheritance :-
            Single Inheritance occurs when child/derived class inherits only a single parent class.
    2) Multiple Inheritance :-
            Multiple Inheritance occurs when the child class inherits from more than one parent class.
    3) Multilevel Inheritance
            Multilevel Inheritance occurs when a child class becomes a parent for another child class.

'''

#-> Syntax
'''
class Employee:                           #-> Base class
    company = "Google"

    def showDetails(self):
        print("This is an Employee.")

class programmer(Employee):               #-> Derived or child class 
    language = "Python"
    def getLang(self):
        print(f"The language is {self.language}.")

    def showDetails(self):
        print("This is Programmer.")    #-> this will overwrite the main class function and print this...

e = Employee()
e.showDetails()
p = programmer()
p.showDetails()
print(p.company)
'''

#-> 1) Single Inheritance
'''
class Employee:                          
    company = "Google"

    def showDetails(self):
        print("This is an Employee.")

class programmer(Employee):               
    language = "Python"
    def getLang(self):
        print(f"The language is {self.language}.")


e = Employee()
e.showDetails()
p = programmer()
p.showDetails()
print(p.company)
'''

#-> 2) Multiple Inheritance
'''
class Employee:
    company = "Nike"
    ecode = 2917

class Freelancer:
    company = "Upwork"
    level = 0

class Programmer(Employee,Freelancer):  #-> Multiple parent classes
    name = "Pranav"

p = Programmer()
print(p.level)
print(p.company)
print(p.ecode)
print(p.company)
print(p.name)
'''

#-> 3) Multilevel Inheritance
'''
class Sports():
    def sport(self):
        print(f"I play Football.")

class Football(Sports):
    def name(self):
        print(f"My name is Pranav.")

class Jersey(Football):
    def Jersey_no(self):
        print(f"My Jersey Number is 17.")

s = Sports()
f = Football()
j = Jersey()

j.sport()
j.name()
j.Jersey_no()
'''