
#--> super() Method == It is used to access the methods of a super class in the derived class.


'''
class Sports():
    def play(self):
        print(f"I am Playing the sport.")

class Football(Sports):
    def play(self):    
        super().play() 
        print(f"I am Playing Football.")  
        
class Jersey(Football):
    def play(self):
        super().play()
        print(f"I am Playing Football in my own jersey.")

s = Sports()
s.play()

f = Football()
f.play()

j = Jersey()
j.play()

'''