# __init__ Contructor

'''
__init__() is a special method which is first run as soon as the object is created.
This __init__ method is also called as contructor.
It takes 'self' arguement and can also take further arguements.
'''

'''
class Human:
    def __init__(self):    #-> this will be executed without this method is run.
        print("Human is created.")

    @staticmethod
    def greet():
        print("Good Morning!!!")

Pranav = Human()
Pranav.greet()
'''

'''
class Employee:
    company = "Google"

    def __init__(self,name,salary,subunit):
        self.name = name
        self.salary = salary
        self.subunit = subunit
        print("Employee is created...")

    def getDetails(self):
        print(f"The name of the employee is {self.name}.")
        print(f"The salary of the employee is {self.salary}.")
        print(f"The subunit of the employee is {self.subunit}.")

pranav = Employee("Pranav", 100000, "Youtube")
pranav.getDetails()
pranav.getSalary()
'''