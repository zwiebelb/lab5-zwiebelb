lab: main.cpp coordinates.cpp coordinates.h
	g++ -Wall -Werror -std=c++11 main.cpp coordinates.cpp -g -o lab

lab5: coordinates.cpp coordinates.h test.cpp
	g++ -Wall -Werror -std=c++11 -lgtest coordinates.cpp test.cpp -g -o lab5

test: lab5
	./lab5

