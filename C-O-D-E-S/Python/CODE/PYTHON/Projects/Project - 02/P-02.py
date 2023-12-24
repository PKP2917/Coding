#---> THE PERFECT GUESS GAME

import random
randNumber = random.randint(1,100)

userGuess = None
guesses = 0

while(userGuess != randNumber):
    userGuess = int(input("Enter your Guess : "))
    guesses += 1
    if(userGuess == randNumber):
        print("You guessed it right...")
    else:
        if(userGuess > randNumber):
            print("You guessed it wrong, Enter a smaller number.")
        else:
            print("You guessed it wrong, Enter a Larger number.")
        

print(f"You guessed the number n {guesses} guesses.")
