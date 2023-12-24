# Practice Set


#-> Q.1)
'''
class C2DVec:
    def __init__(self,i,j):
        self.icap = i
        self.jcap = j

    def __str__(self):
        return f"{self.icap}i + {self.jcap}j"

class C3DVec(C2DVec):
    def __init__(self,i,j,k):
        super().__init__(i,j)
        self.kcap = k

    def __str__(self):
        return f"{self.icap}i + {self.jcap}j + {self.kcap}k"

v2d = C2DVec(1,3)
v3d = C3DVec(1,7,3)

print(v2d)
print(v3d)
'''


#-> Q.2)
'''
class Animals:
    print("Here are all animals")

class Pets(Animals):
    print("Here are all pets")

class Dogs(Pets):
    print("Here are all dogs")

    @staticmethod
    def bark():
        print("bhoooooo....")

a = Animals()
p = Pets()
d = Dogs()

d.bark()
'''


#-> Q.3)
'''
class Employee:
    company = "Nivia"
    salary = 172933
    increment = 1.7

    @property
    def salaryafterincrement(self):
        return self.salary * self.increment

    @salaryafterincrement.setter
    def salaryafterincrement(self, sai):
        self.increment = sai / self.salary

e = Employee()
print(e.salaryafterincrement)
print(e.increment)

e.salaryafterincrement = 300000
print(e.salaryafterincrement)
print(e.increment)
'''


#-> Q.4)
'''
class Complex:
    def __init__(self,r,i):
        self.real = r
        self.imaginary = i
    
    def __add__(self,c):
        return Complex(self.real + c.real , self.imaginary + c.imaginary)

    def __mul__(self,c):
        mulReal = self.real * c.real - self.imaginary * c.imaginary
        mulImg = self.real * c.imaginary + self.imaginary * c.real
        return Complex(mulReal, mulImg)

    def __str__(self):
        return f"{self.real} + {self.imaginary}i"

c1 = Complex(17, 29)
c2 = Complex(33, 10)

print(c1 + c2)
print(c1 * c2)
'''


#-> Q.5)
'''
class Vector:
    def __init__(self, vec):
        self.vec = vec

    def __str__(self):
        str1 = ""
        index = 0
        for i in self.vec:
            str1 += f" {i}a{index} +"
            index +=1
        return str1[:-1]

    def __add__(self, vec2):
        newList = []
        for i in range(len(self.vec)):
            newList.append(self.vec[i] + vec2.vec[i])
        return Vector(newList)

    def __mul__(self, vec2):
        sum = 0
        for i in range(len(self.vec)):
            sum += self.vec[i] + vec2.vec[i]
        return sum

v1 = Vector([1,7,9])
v2 = Vector([2,4,8])

print(v1 + v2)
print(v1 * v2)
'''


#-> Q.6)
'''
class Vector:
    def __init__(self, vec):
        self.vec = vec

    def __str__(self):
        return f"{self.vec[0]}i + {self.vec[1]}j + {self.vec[2]}k"

v1 = Vector([1,7,9])
v2 = Vector([2,4,8])

print(v1)
print(v2)
'''


#-> Q.7)
'''
class Vector:
    def __init__(self, vec):
        self.vec = vec

    def __str__(self):
        str1 = ""
        index = 0
        for i in self.vec:
            str1 += f" {i}a{index} +"
            index +=1
        return str1[:-1]

    def __len__(self):
        return len(self.vec)


v1 = Vector([1,7,9,10,17])
v2 = Vector([2,4,8])

print(len(v1))
print(len(v2))
'''