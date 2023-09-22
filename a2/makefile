.default: all

all: clean fifo sjf rr

clean:
	rm -rf mtcopier *.o *.dSYM

fifo:
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^
sjf:
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^
rr:
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^

mtcopier: reader.o writer.o mtcopier.o
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^ -lpthread

%.o: %.cpp
	g++ -Wall -Werror -std=c++20 -g -O -c $^