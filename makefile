CC=gcc
DEPS = search_functions.h
TARGET = search
OBJS = search_main.o binarySearch.o bubbleSort.o swap.o sequentialSearch.o

%.o: %.c $(DEPS)
	$(CC) -o $@ -c $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ 

clean:
	rm *.o

cleanAll:
	rm $(TARGET) *.o
