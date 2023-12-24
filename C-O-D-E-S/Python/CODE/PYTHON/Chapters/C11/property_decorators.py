
#--> Property Decorators, getters and setters

'''
class Employee:
    company = "Puma"
    salary = 291733
    salarybonus = 3317
    
    @property
    def totalSalary(self):
        return self.salary + self.salarybonus

    @totalSalary.setter
    def totalSalary(self, val):
        self.salarybonus = val - self.salary

e = Employee()
print(e.totalSalary)
e.totalSalary = 100
print(e.salary)
print(e.salarybonus)
'''