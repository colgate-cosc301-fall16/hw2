.PHONY: clean
CC=clang
CFLAGS=-g -Wall --std=c99 -fpic -I.
LDFLAGS=-L.
OBJ=hw2.o

hw2: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)


%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f hw2.o hw2 libhw2.so

libhw2.so: $(OBJ)
	$(CC) -shared -o $@ $^
