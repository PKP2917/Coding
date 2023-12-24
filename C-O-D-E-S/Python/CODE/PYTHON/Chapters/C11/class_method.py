
#--> Class Method == A class method is a method which is bound to the class and not the object of the class.

'''
class Employee:
    company = "Adidas"
    salary = 10000
    location = "Pune"

    # def changeSalary(Self,sal):
    #     self.__class__.salary = sal

    @classmethod
    def changeSalary(cls,sal):
        cls.salary = sal

e = Employee()
print(e.salary)
e.changeSalary(20000)
print(e.salary)
print(Employee.salary)
'''