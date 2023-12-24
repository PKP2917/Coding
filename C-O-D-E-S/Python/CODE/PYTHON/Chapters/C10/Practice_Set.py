# Practice Set


#-> Q.1)
'''
class Programmer:
    company = "Microsoft"

    def __init__(self,name,product):
        self.name = name
        self.product = product

    def getInfo(self):
        print(f"The name of the {self.company} programmer is {self.name} and the product is {self.product}.")

pranav = Programmer("Pranav", "Skype")
sanjana = Programmer("Sanjana", "Github")

pranav.getInfo()
sanjana.getInfo()
'''


#-> Q.2)
'''
class Calculator:
    def __init__(self,num):
        self.number = num

    def square(self):
        print(f"The square of {self.number} is {self.number**2}.")

    def cube(self):
        print(f"The cube of {self.number} is {self.number**3}.")

    def squareroot(self):
        print(f"The square root of {self.number} is {self.number**0.5}.")

a =Calculator(10)
a.cube()
a.square()
a.squareroot()
'''


#-> Q.3)
'''
class Calculator:
    def __init__(self,num):
        self.number = num

    def square(self):
        print(f"The square of {self.number} is {self.number**2}.")

    def cube(self):
        print(f"The cube of {self.number} is {self.number**3}.")

    def squareroot(self):
        print(f"The square root of {self.number} is {self.number**0.5}.")

    @staticmethod
    def greet():
        print("Hello,")

a =Calculator(10)
a.greet()
a.cube()
a.square()
a.squareroot()
'''


#-> Q.4)
'''
class Train:
    def __init__(self,name,fare,seats):
        self.name = name
        self.fare = fare
        self.seats = seats

    def getStatus(self):
        print(f"The name of the train is {Self.name}.")
        print(f"The seats available in the train is {Self.seats}.")
    
    def fareInfo(self):
        print(f"The price of Ticket is : Rs {self.fare}")

    def bookTicket(self):
        if(self.seats > 0):
            print(f"Your Ticket has been Booked! Your Seat Number is {self.seats}.")
            self.seats = self.seats - 1
        else:
            print(f"Sorry this train is Full! try in tatkal...")


intercity = Train("Intercity Express: 291733", 110312, 333)
intercity.getStatus()
intercity.fareInfo()
intercity.bookTicket()
intercity.getStatus()
'''