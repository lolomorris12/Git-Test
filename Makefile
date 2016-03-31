# Logan Morris
# 3-31-2016
# Git assignment makefile

all: main

main: main.o
	g++ main.o -o main
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o *~ main *# *.gch 
