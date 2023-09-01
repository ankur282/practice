CC = gcc
all: my_area

my_area: area.o main.o
	$(CC) -o $@ $^

area.o: area.c area.h
	$(CC) -c $<

main.o: main.c area.h
	$(CC) -c $<

clean:
	rm -f *.o my_area

