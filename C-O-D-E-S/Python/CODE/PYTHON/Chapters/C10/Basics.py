#---> OBJECT ORIENTED PROGRAMMING


#--> Class :- a class is a blueprint or template for creating objects. memory is not allocated to a class.
'''
-> class name is written in Pascalcase(first alphabet should always be in capital.)
class Number:         //--> class
    def sum(self):    //-> function in a class
        return self.a + self.b

num = Number()
num.a = 17
num.b = 33
s = num.sum()
print(s)
'''

'''
PascalCase --> EmployeeName    (first alphabet should always be in capital and the second in also capital.)
camelCase  --> isNumeric       (first alphabet should always be in small and the second in capital.)
'''


#--> Object :- it is an instantiation of a class. memory is allocated only after object instantiation.
'''
class Number:          //--> class  
    def sum(self):     //-> function in a class
        return self.a + self.b

num = Number()   //-> we have created a object 'num' in which we use the template or class 'Number'.
num.a = 17
num.b = 33
s = num.sum()
print(s)
'''