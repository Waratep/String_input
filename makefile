all: uinput.c main.c
	gcc -c uinput.c -o uinput.o
	gcc -c main.c -o main.o
	gcc uinput.o main.o -o main

clean: 
	del uinput.o main.o main.exe
