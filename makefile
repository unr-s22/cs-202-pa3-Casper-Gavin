
all: main.o money.o account.o
	g++ -std=c++11 -o summary money.o account.o main.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp

account.o: Account.cpp
	g++ -std=c++11 -c Account.cpp

clean:
	rm *.o summary