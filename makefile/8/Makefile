# make

EXE = hello

OBJS = main.o hello.o

CC = gcc

CFLAGS = -Wall

.SUFFIEXS: .c .o

$(EXE): $(OBJS)
	$(CC) -o $(EXE) $^

.c.o:
	$(CC) $(CFLAGS) -c $<

# make clean
.PHNOY: clean
clean:
	$(RM) $(EXE) $(OBJS)

hello.o: hello.h
