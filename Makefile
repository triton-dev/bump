CC = g++
CFLAGS = -std=c++11
OUT = -o bump
LIBS = -lncurses

bump: bump.o
	$(CC) $(CFLAGS) $(LIBS) $(OUT) bump.o
	
bump.o: bump.c
	$(CC) $(CFLAGS) $(LIBS) -c bump.c


.PHONY: clean
clean:
	rm *.o

cleanall:
	rm *.o
	rm bump

	
	
