# Practice Set

#-> Q.1)
'''
dict = {
    "saas" : "Mother-in-law",
    "sasoor" : "Father-in-law",
    "bahu" : "Daughter-in-law",
    "beta" : "Son",
    "maa" : "Mother",
    "papa" : "Father",
    "beti" : "Daughter"
}

print("Options : ",dict.keys())
a = input("Hindi word : ")
print("English Word : ",dict.get(a))        
'''

#-> Q.2)
'''
a1 = int(input("Enter the numbers : "))
a2 = int(input("Enter the numbers : "))
a3 = int(input("Enter the numbers : "))
a4 = int(input("Enter the numbers : "))
a5 = int(input("Enter the numbers : "))

s = {a1,a2,a3,a4,a5}
print(s)
'''

#-> Q.3)
'''
s=set()
s.add(20)
s.add(20.0)
s.add("20")
print(s)
print(len(s))
'''

#-> Q.4)
'''
d = {}
ak1 = input("Enter your name : ")
av1 = input("Enter your favourite language : ")
ak2 = input("Enter your name : ")
av2 = input("Enter your favourite language : ")
ak3 = input("Enter your name : ")
av3 = input("Enter your favourite language : ")
ak4 = input("Enter your name : ")
av4 = input("Enter your favourite language : ")

d[ak1]=av1
d[ak2]=av2
d[ak3]=av3
d[ak4]=av4

print(d)
'''