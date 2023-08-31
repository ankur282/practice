CC = gcc
all: my_area

my_area: area.o main.o
	$(CC) $(CFLAGS) -o $@ $^

area.o: area.c area.h
	$(CC) $(CFLAGS) -c $<

main.o: main.c area.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o my_area

