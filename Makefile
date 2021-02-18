lab.5: coordinates.cpp coordinates.h test.cpp
	g++ -Wall -Werror -std=c++11 -lgtest coordinates.cpp test.cpp -g -o lab.5

lab: main.cpp coordinates.cpp coordinates.h
	g++ -Wall -Werror -std=c++11 main.cpp coordinates.cpp -g -o lab

test: lab.5
	./lab.5

