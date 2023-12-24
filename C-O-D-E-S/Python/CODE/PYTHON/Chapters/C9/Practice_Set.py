#-> Practice Set


#-> Q.1)
'''
f = open('C9_PS1.txt')
t = f.read()
if 'twinkle' in t:
    print("twinkle is present")
else:
    print("twinkle is not present")

f.close()
'''

#-> Q.2)
'''
def game():
    return 100

score=game()
with open('C9_PS2.txt') as f:
    highscore = int(f.read())

if highscore<score :
    with open("C9_PS2.txt",'w') as f:
        f.write(str(score))
'''

#-> Q.3)
'''
with open("C9_PS3.txt") as f:
    content = f.read()

content = content.replace("stupid","@$#*&^")

with open("C9_PS3.txt","w") as f:
    content = f.write(content)
'''

#-> Q.4)
'''
words = ["stupid","shit"]

with open("C9_PS3.txt") as f:
    content = f.read()

for word in words:
    content = content.replace(word,"@$#*&^")

    with open("C9_PS3.txt","w") as f:
        f.write(content)
'''

#-> Q.5)
'''
with open("C9_PS4.txt") as f:
    content = f.read()

with open("C9_PS5.txt",'w') as f:
    f.write(content)
'''

#-> Q.6)
'''
file1 = "C9_PS4.txt"
file2 = "C9_PS5.txt"

with open(file1) as f:
    content1 = f.read()

with open(file2) as f:
    content2 = f.read()

if(content1==content2):
    print("The content is same.")
else:
    print("Content is different.")
'''

#-> Q.7)
'''
file1 = "C9_PS7.txt"

with open(file1 , 'w') as f:
    f.write("")
'''