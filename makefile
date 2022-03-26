<<<<<<< HEAD
all: main.o Money.o Account.o
	g++ -std=c++11 -o summary Money.o Account.o main.o
=======
all: main.o money.o account.o
	g++ -std=c++11 -o summary money.o account.o main.o
>>>>>>> cd488f29b6c73d9530835e3196d728a680c766e0

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

<<<<<<< HEAD
Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp

Account.o: Account.cpp
=======
money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp

account.o: Account.cpp
>>>>>>> cd488f29b6c73d9530835e3196d728a680c766e0
	g++ -std=c++11 -c Account.cpp

clean:
	rm *.o summary