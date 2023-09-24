.default: all

all: clean fifo sjf rr

clean:
	rm -rf fifo *.o *.dSYM
	rm -rf sjf *.o *.dSYM
	rm -rf rr *.o *.dSYM

fifo: fifo.o loader.o fifo_s.o pcb.o
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^

sjf: sjf.o loader.o sjf_s.o pcb.o
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^

rr: rr.o loader.o rr_s.o pcb.o
	g++ -Wall -Werror -std=c++20 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++20 -g -O -c $^