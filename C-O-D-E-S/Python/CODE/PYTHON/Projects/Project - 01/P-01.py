#---> SNAKE, WATER, GUN GAME


import random    #-> importing the 'random' module

#-> defining the main 'game' function and logic behind the game
def game(comp , you):
    if comp == you:
        return None
    elif comp == 's':
        if you == 'w':
            return False
        if you == 'g':
            return True
    elif comp == 'w':
        if you == 's':
            return True
        if you == 'g':
            return False
    elif comp == 'g':
        if you == 'w':
            return True
        if you == 's':
            return False


#-> Taking input from computer(random)
print("Computer Turn : Snake(s) Water(w) or Gun(g)?")
randno = random.randint(1,3)
if randno == 1:
    comp = 's'
elif randno == 2:
    comp = 'w'
elif randno == 3:
    comp = 'g'

#-> taking input from player.
you = input("Player Turn : Snake(s) Water(w) or Gun(g)?")

#-> Calling the game function
a=game(comp,you)

#-> printing the respective choices
print("---------------------")
print(f"Computer : {comp}")
print(f"Player : {you}")
print("---------------------")

#-> printing the final result
if a==None:
    print("The game is tie!!!")
elif a:
    print("You WON!!!")
else:
    print("You LOSE!!!")