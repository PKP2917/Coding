'''
class Employee:
    company = "Google"
    def getSalary(self):   #-> it is the first arguement which is to be passed in instance method or constructor
        print("Salary is 100k.")

Pranav = Employee()
Pranav.getSalary()        # === Employee.getSalary(Pranav) #-> upper line is converted to this inside the execution
'''

'''
class Employee:
    company = "Google"
    def getSalary(self):   
        print(f"Salary is for this employee working in {self.company} is {self.salary}.")

Pranav = Employee()       #-> object instantiation
Pranav.salary = 100000    #-> instance attribute created

Pranav.getSalary()        #-> here 'self' works as 'Pranav'
'''