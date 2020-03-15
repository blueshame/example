OBJECTS=show_type_size.o
CC=g++
CFLAGS=
LDFLAGS=
INCLUDES=
ALLLIBS=
APPNAME=showTypeSize

all: $(OBJECTS)
	$(CC) $(LDFLAGS) -o $(APPNAME) $(OBJECTS) $(ALLLIBS)

show_type_size.o: show_type_size.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c show_type_size.cpp

.PHONY: clean
clean:
	@echo clean $(OBJECTS) $(APPNAME)
	rm -fr $(OBJECTS) $(APPNAME)