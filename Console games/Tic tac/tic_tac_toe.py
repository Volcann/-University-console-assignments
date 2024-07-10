tic_tac_toe = {
    1: " " , 2: " " , 3: " ",
    4: " " , 5: " " , 6: " ",
    7: " " , 8: " " , 9: " "
}

def check():
    if (tic_tac_toe[1] == "X" and tic_tac_toe[2] == "X" and tic_tac_toe[3] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[1] == " O" and tic_tac_toe[2] == "O" and tic_tac_toe[3] == "O"):
        print("Player 2 win")
        quit(0)

    if (tic_tac_toe[4] == "X" and tic_tac_toe[5] == "X" and tic_tac_toe[6] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[4] == " O" and tic_tac_toe[5] == "O" and tic_tac_toe[6] == "O"):
        print("Player 2 win")
        quit(0)

    if (tic_tac_toe[7] == "X" and tic_tac_toe[8] == "X" and tic_tac_toe[9] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[7] == " O" and tic_tac_toe[8] == "O" and tic_tac_toe[9] == "O"):
        print("Player 2 win")
        quit(0)


    if (tic_tac_toe[1] == "X" and tic_tac_toe[4] == "X" and tic_tac_toe[7] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[1] == " O" and tic_tac_toe[4] == "O" and tic_tac_toe[7] == "O"):
        print("Player 2 win")
        quit(0)

    if (tic_tac_toe[2] == "X" and tic_tac_toe[5] == "X" and tic_tac_toe[8] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[2] == " O" and tic_tac_toe[5] == "O" and tic_tac_toe[8] == "O"):
        print("Player 2 win")
        quit(0)

    if (tic_tac_toe[3] == "X" and tic_tac_toe[6] == "X" and tic_tac_toe[9] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[3] == " O" and tic_tac_toe[6] == "O" and tic_tac_toe[9] == "O"):
        print("Player 2 win")
        quit(0)


    if (tic_tac_toe[1] == "X" and tic_tac_toe[5] == "X" and tic_tac_toe[9] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[1] == " O" and tic_tac_toe[5] == "O" and tic_tac_toe[9] == "O"):
        print("Player 2 win")
        quit(0)

    if (tic_tac_toe[3] == "X" and tic_tac_toe[5] == "X" and tic_tac_toe[7] == "X"):
        print("Player 1 win")
        quit(0)
    if (tic_tac_toe[3] == " O" and tic_tac_toe[5] == "O" and tic_tac_toe[7] == "O"):
        print("Player 2 win")
        quit(0)

def board():
    print(" 1 |  2  | 3 ")
    print(" ----------- ")
    print(" 4 |  5  | 6 ")
    print(" ----------- ")
    print(" 7 |  8  | 9 \n")
    print(" ",tic_tac_toe[1]," | ",tic_tac_toe[2]," | ",tic_tac_toe[3]," ")
    print(" ----------------- ")
    print(" ",tic_tac_toe[4]," | ",tic_tac_toe[5]," | ",tic_tac_toe[6]," ")
    print(" ----------------- ")
    print(" ",tic_tac_toe[7]," | ",tic_tac_toe[8]," | ",tic_tac_toe[9]," \n")
def player_1():
    print("Player 1 turn (X) : ")
    board()
    while True:
        x = int(input("Enter any value : "))
        if tic_tac_toe[x] != "X" or tic_tac_toe[x] != "O":
            tic_tac_toe[x] = "X"
            break
        else:
            print("Any other value")
    board()

def player_2():
    print("Player 2 turn (O) : ")
    board()
    while True:
        x = int(input("Enter any value : "))
        if tic_tac_toe[x] != "X" or tic_tac_toe[x] != "O":
            tic_tac_toe[x] = "O"
            break
        else:
            print("Any other value")
    board()

while True:
  player_1()
  if check() :
      break
  player_2()
  if check() :
      break