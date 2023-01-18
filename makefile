# Specifiy the target
all: plinko

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
plinko: plinko.o
	g++ plinko.o -o plinko

# Specify how the object files should be created from source files
plinko.o: plinko.cpp
	g++ -c plinko.cpp


# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o plinko
