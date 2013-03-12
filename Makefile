
.PHONY: clean lib

all: lib

lib:
	cd src && make lib
	
clean:
	cd src && make clean	
	