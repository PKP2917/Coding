'''
class Employee:
    company = "Google"       #-> class attribute (it belongs to a class)


Pranav = Employee()          #-> object "Pranav" instantiation
Pranav.salary = 17000        #-> instance attribute (it belongs to a object)
print(Pranav.company)
print(Pranav.salary)


Shravanee = Employee()       #-> object "Shravanee" instantiation
Shravanee.salary = 20000      #-> instance attribute (it belongs to a object)
print(Shravanee.company)
print(Shravanee.salary)

Employee.company = "Microsoft"    #-> changing the class attribute
'''


class Employee:
    company = "Google"       #-> class attribute (it belongs to a class)
    salary = 25000           #-> class attribute (it belongs to a class)   

#-> instance attribute take preference over class attribute during assignment and retreival

Pranav = Employee()          #-> object "Pranav" instantiation
Pranav.salary = 17000        #-> instance attribute (it belongs to a object)
print(Pranav.company)
print(Pranav.salary)


Shravanee = Employee()       #-> object "Shravanee" instantiation
Shravanee.salary = 20000      #-> instance attribute (it belongs to a object)
print(Shravanee.company)
print(Shravanee.salary)

Employee.company = "Microsoft"    #-> changing the class attribute

print(Pranav.company)
print(Shravanee.company)