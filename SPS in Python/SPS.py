"""
1=> Rock
2=> Paper
3=> Scissors

"""
import random


def YourChoice():
    print('To Select "Rock" Press "1"')
    print('To Select "Paper" Press "2"')
    print('To Select "Scissor" Press "3"')

    YourChoice = int(input("Please enter your choice:- "))
    if(YourChoice == 1):
        print('You chose "Rock"')
        print("\n")

    elif(YourChoice == 2):
        print('You chose "Paper"')
        print("\n")

    elif(YourChoice == 3):
        print('You chose "Scissors"')
        print("\n")

    else:
        print("Invalid choice!! Choose again")
        print("\n")

    return YourChoice


def CompChoice():
    CompChoice = random.randrange(1, 3)
    if(CompChoice == 1):
        print('Computer chose "Rock"')
        print("\n")
    elif(CompChoice == 2):
        print('Computer chose "Paper"')
        print("\n")
    elif(CompChoice == 3):
        print('Computer chose "Scissors"')
        print("\n")

    return CompChoice


def winner(YourChoice, CompChoice):
    if(CompChoice == 1 and YourChoice == 2):
        print('YOU "WON"')
        print("\n")
        return 1

    elif(CompChoice == 2 and YourChoice == 3):
        print('YOU "WON"')
        print("\n")
        return 1

    elif(CompChoice == 3 and YourChoice == 1):
        print('YOU "WON"')
        print("\n")
        return 1

    elif(CompChoice == 1 and YourChoice == 3):
        print('COMPUTER "WON"')
        print("\n")
        return 0

    elif(CompChoice == 2 and YourChoice == 1):
        print('COMPUTER "WON"')
        print("\n")
        return 0

    elif(CompChoice == 3 and YourChoice == 2):
        print('COMPUTER "WON"')
        print("\n")
        return 0

    else:
        print('Its a "DRAW"')
        return 3
        print("\n")


name = input("Please enter your name:- \n")
print("\n")

rounds = int(input("How many rounds would you like to play? \n"))
print("\n")

YourScore = 0
ComputerScore = 0

for i in range(0, rounds):
    MYCHOICE = YourChoice()
    COMPUTERCHOICE = CompChoice()
    Score = winner(MYCHOICE, COMPUTERCHOICE)
    if(Score == 0):
        ComputerScore += 1
    elif(Score == 1):
        YourScore += 1

print("Your Total Score = " + str(YourScore) +
      " Computers Total Score = " + str(ComputerScore))
