# -*- coding: utf-8 -*-
"""
Can be played by 2 people or against the computer.
For the latter, there are 3 difficulty levels:
    1 - the opponent moves randomly
    2 - the first few moves are strategic, the rest are random
    3 - most moves are strategic
"""

import time
import random
from tkinter import *
canvas_width=314
canvas_height=314
master=Tk()
master.title('board')
c=Canvas(master, width=canvas_width, height=canvas_height)
c.pack()
def move(d, n):
    if places[str(n)]!="nothing":
        n=int(input("invalid move, please make a different one: "))
        move(d, n)
        return
    xy=coordinates[str(n)]
    x=xy[:xy.find(" ")]
    y=xy[xy.find(" "):]
    nn=c.create_text(x, y, text=str(n), fill="white", font=("Arial", 30))
    r=c.create_text(x, y, text=d, fill="black", font=("Arial", 60))
    places[str(n)]=d
    master.update_idletasks()
    master.update()
def check(places):
    if places["1"]==places["2"] and places["2"]==places["3"] and places["1"]!="nothing":
        p=places["1"]
        line = c.create_line(5, 53, 309, 53, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["4"]==places["5"] and places["5"]==places["6"] and places["4"]!="nothing":
        p=places["4"]
        line = c.create_line(5, 155, 309, 155, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["7"]==places["8"] and places["8"]==places["9"] and places["7"]!="nothing":
        p=places["7"]
        line = c.create_line(5, 257, 309, 257, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["1"]==places["4"] and places["4"]==places["7"] and places["1"]!="nothing":
        p=places["1"]
        line = c.create_line(55, 5, 55, 309, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["2"]==places["5"] and places["5"]==places["8"] and places["2"]!="nothing":
        p=places["2"]
        line = c.create_line(157, 5, 157, 309, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["3"]==places["6"] and places["6"]==places["9"] and places["3"]!="nothing":
        p=places["3"]
        line = c.create_line(259, 5, 259, 309, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["1"]==places["5"] and places["5"]==places["9"] and places["1"]!="nothing":
        p=places["1"]
        line = c.create_line(5, 5, 309, 309, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["3"]==places["5"] and places["5"]==places["7"] and places["3"]!="nothing":
        p=places["3"]
        line = c.create_line(309, 5, 5, 309, fill = "red", width = 4)
        print(p, "WON", sep=" ")
        print("GAME OVER")
        return "game over"
    if places["1"]!="nothing" and places["2"]!="nothing" and places["3"]!="nothing" and places["4"]!="nothing" and places["5"]!="nothing" and places["6"]!="nothing" and places["7"]!="nothing" and places["8"]!="nothing" and places["9"]!="nothing":
        print("DRAW")
        print("GAME OVER")
        return "game over"
def iisone():
    if places["5"]=="X":
        move("O", "9")
    else:
        move("O", "5")
def iistwo():
    if places["6"]=="O":
        move("X", "7")
    elif places["8"]=="O":
        move("X", "3")
    elif places["3"]=="O" or places["7"]=="O" or places["5"]=="O":
        move("X", "1")
    elif places["2"]=="O":
        move("X", "3")
    elif places["4"]=="O":
        move("X", "7")
    elif places["1"]=="O":
        move("X", "3")
def iisthree():
    if places["9"]=="O":
        if places["8"]=="X":
            move("O", "2")
        elif places["6"]=="X":
            move("O", "4")
        elif places["7"]=="X":
            move("O", "3")
        elif places["3"]=="X":
            move("O", "7")
        elif places["4"]=="X":
            move("O", "6")
        elif places["2"]=="X":
            move("O", "8")
        elif places["1"]=="X":
            move("O", "3")
    else:
        if places["1"]=="X" and places["2"]=="X":
            move("O", "3")
        elif places["1"]=="X" and places["3"]=="X":
            move("O", "2")
        elif places["1"]=="X" and places["4"]=="X":
            move("O", "7")
        elif places["1"]=="X" and places["6"]=="X":
            move("O", "2")
        elif places["1"]=="X" and places["7"]=="X":
            move("O", "4")
        elif places["1"]=="X" and places["8"]=="X":
            move("O", "4")
        elif places["1"]=="X" and places["9"]=="X":
            move("O", "6")
        elif places["2"]=="X" and places["3"]=="X":
            move("O", "1")
        elif places["2"]=="X" and places["4"]=="X":
            move("O", "1")
        elif places["2"]=="X" and places["6"]=="X":
            move("O", "3")
        elif places["2"]=="X" and places["7"]=="X":
            move("O", "4")
        elif places["2"]=="X" and places["8"]=="X":
            move("O", "9")
        elif places["2"]=="X" and places["9"]=="X":
            move("O", "6")
        elif places["3"]=="X" and places["4"]=="X":
            move("O", "2")
        elif places["3"]=="X" and places["6"]=="X":
            move("O", "9")
        elif places["3"]=="X" and places["7"]=="X":
            move("O", "4")
        elif places["3"]=="X" and places["8"]=="X":
            move("O", "6")
        elif places["3"]=="X" and places["9"]=="X":
            move("O", "6")
        elif places["4"]=="X" and places["6"]=="X":
            move("O", "3")
        elif places["4"]=="X" and places["7"]=="X":
            move("O", "1")
        elif places["4"]=="X" and places["8"]=="X":
            move("O", "7")
        elif places["4"]=="X" and places["9"]=="X":
            move("O", "8")
        elif places["6"]=="X" and places["7"]=="X":
            move("O", "8")
        elif places["6"]=="X" and places["8"]=="X":
            move("O", "9")
        elif places["6"]=="X" and places["9"]=="X":
            move("O", "3")
        elif places["7"]=="X" and places["8"]=="X":
            move("O", "9")
        elif places["7"]=="X" and places["9"]=="X":
            move("O", "8")
        elif places["8"]=="X" and places["9"]=="X":
            move("O", "7")
def oneplayer():
    player=input("Difficulty level (1-3): ")    
    if player=="1":
        p=input("Choose X or O: ")
        if p!="X" and p!="O":
            print("invalid input")
        if p=="X":
            for i in range(9):
                if i%2==0:
                    d="X"
                    n=input("Make your move: ")
                    move(d, n)
                else:
                    time.sleep(0.7)
                    numbers=[]
                    for key in places:
                        if places[key]=="nothing":
                            numbers.append(int(key))
                    l=len(numbers)
                    k=random.randint(1, l)
                    n=numbers[k-1]
                    d="O"
                    move(d, str(n))
                    numbers=[]
                if check(places)=="game over":
                    break
        if p=="O":
            for i in range(9):
                if i%2==0:
                    time.sleep(0.7)
                    numbers=[]
                    for key in places:
                        if places[key]=="nothing":
                            numbers.append(int(key))
                    l=len(numbers)
                    k=random.randint(1, l)
                    n=numbers[k-1]
                    d="X"
                    move(d, str(n))
                    numbers=[]
                else:
                    d="O"
                    n=input("Make your move: ")
                    move(d, n)
                if check(places)=="game over":
                    break
    elif player=="2":
        p=input("Choose X or O: ")
        if p!="X" and p!="O":
            print("invalid input")
        if p=="X":
            for i in range(9):
                if i%2==0:
                    d="X"
                    n=input("Make your move: ")
                    move(d, n)
                else:
                    if i==1:
                        time.sleep(0.7)
                        iisone()
                    else:
                        time.sleep(0.7)
                        numbers=[]
                        for key in places:
                            if places[key]=="nothing":
                                numbers.append(int(key))
                        l=len(numbers)
                        k=random.randint(1, l)
                        n=numbers[k-1]
                        d="O"
                        move(d, str(n))
                        numbers=[]
                if check(places)=="game over":
                    break
        if p=="O":
            for i in range(9):
                if i%2==0:
                    if i==0:
                        time.sleep(0.7)
                        move("X", "9")
                    else:
                        time.sleep(0.7)
                        numbers=[]
                        for key in places:
                            if places[key]=="nothing":
                                numbers.append(int(key))
                        l=len(numbers)
                        k=random.randint(1, l)
                        n=numbers[k-1]
                        d="X"
                        move(d, str(n))
                        numbers=[]
                else:
                    d="O"
                    n=input("Make your move: ")
                    move(d, n)
                if check(places)=="game over":
                    break
    elif player=="3":
        p=input("Choose X or O: ")
        if p!="X" and p!="O":
            print("invalid input")
        if p=="X":
            for i in range(9):
                if i%2==0:
                    d="X"
                    n=input("Make your move: ")
                    move(d, n)
                else:
                    if i==1:
                        time.sleep(0.7)
                        iisone()
                    elif i==3:
                        time.sleep(0.7)
                        iisthree()
                    else:
                        time.sleep(0.7)
                        numbers=[]
                        for key in places:
                            if places[key]=="nothing":
                                numbers.append(int(key))
                        l=len(numbers)
                        k=random.randint(1, l)
                        n=numbers[k-1]
                        d="O"
                        move(d, str(n))
                        numbers=[]
                if check(places)=="game over":
                    break
        if p=="O":
            for i in range(9):
                if i%2==0:
                    if i==0:
                        time.sleep(0.7)
                        move("X", "9")
                    elif i==2:
                        time.sleep(0.7)
                        iistwo()
                    else:
                        time.sleep(0.7)
                        numbers=[]
                        for key in places:
                            if places[key]=="nothing":
                                numbers.append(int(key))
                        l=len(numbers)
                        k=random.randint(1, l)
                        n=numbers[k-1]
                        d="X"
                        move(d, str(n))
                        numbers=[]
                else:
                    d="O"
                    n=input("Make your move: ")
                    move(d, n)
                if check(places)=="game over":
                    break
def twoplayers():
    for i in range(9):
        if i%2==0:
            d="X"
            n=input("X, make your move: ")
            move(d, n)
        else:
            d="O"
            n=input("O, make your move: ")
            move(d, n)
        if check(places)=="game over":
            break
def game():
    global places
    global coordinates
    points=(0, 0, 0, 314, 314, 314, 314, 0)
    bg=c.create_polygon(points, outline="white", fill="white", width=1)
    points=(105, 5, 105, 309)
    board=c.create_polygon(points, outline="black", width=2)
    points=(207, 5, 207, 309)
    board=c.create_polygon(points, outline="black", width=2)
    points=(5, 105, 309, 105)
    board=c.create_polygon(points, outline="black", width=2)
    points=(5, 207, 309, 207)
    board=c.create_polygon(points, outline="black", width=2)
    n1=c.create_text(55, 55, text="1", fill="navy", font=("Ariel", 30))
    n2=c.create_text(157, 55, text="2", fill="navy", font=("Ariel", 30))
    n3=c.create_text(259, 55, text="3", fill="navy", font=("Ariel", 30))
    n4=c.create_text(55, 157, text="4", fill="navy", font=("Ariel", 30))
    n5=c.create_text(157, 157, text="5", fill="navy", font=("Ariel", 30))
    n6=c.create_text(259, 157, text="6", fill="navy", font=("Ariel", 30))
    n7=c.create_text(55, 259, text="7", fill="navy", font=("Ariel", 30))
    n8=c.create_text(157, 259, text="8", fill="navy", font=("Ariel", 30))
    n9=c.create_text(259, 259, text="9", fill="navy", font=("Ariel", 30))
    master.update_idletasks()
    master.update()
    coordinates={"1":"55 55", "2":"157 55", "3":"259 55", "4":"55 157", "5":"157 157", "6":"259 157", "7":"55 259", "8":"157 259", "9":"259 259"}
    places={"1":"nothing", "2":"nothing", "3":"nothing", "4":"nothing", "5":"nothing", "6":"nothing", "7":"nothing", "8":"nothing", "9":"nothing"}
    d="nothing"
    ch=int(input("Number of players (1-2): "))
    if ch==1:
        oneplayer()
    elif ch==2:
        twoplayers()
    ch2=input("Do you want to play again (yes/no)? ")
    if ch2=="yes":
        game()
    else:
        return
print("To choose the number of players type 1 or 2")
print("To choose X or O, type a capital letter X or a capital letter O")
print("To make a move type the number of the square you want to go to")
print("If you want to play again, type yes (small latters only)")
print("Level 1 means that the opponent's moves will be random")
game()
master.mainloop()
