#use for ubuntu
OBJECTS = try.o zipknit.o
CC = gcc
CFLAGS = -c -g -Wall
LDFLAGS = -lstdc++
INCLUDES =  -I/usr/include
LIBS = /usr/lib/x86_64-linux-gnu/libz.so

all: $(OBJECTS)
	$(CC) -o dozip $(OBJECTS) $(LDFLAGS) $(LIBS)

try.o: try.c try.h
	$(CC) $(CFLAGS) $(INCLUDES) try.c

zipknit.o: zipknit.c
	$(CC) $(CFLAGS) $(INCLUDES) zipknit.c

.PHONY: clean
clean:
	rm -fr dozip ${OBJECTS}
	@echo "clean done"