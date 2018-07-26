CC = gcc
VPATH = src
objects = bittools_attacks_tests_main.o AttackerSuccessProbabilityTest.o \
	probabilities.o

bittools_attacks_tests_main : $(objects)
	$(CC) -o bittools_attacks_tests_main $(objects)

bittools_attacks_tests_main.o : AttackerSuccessProbabilityTest.h
AttackerSuccessProbabilityTest.o : AttackerSuccessProbabilityTest.h minunit.h \
	probabilities.h
probabilities.o : probabilities.h math.h

.PHONY : clean
clean :
	rm bittools_attacks_tests_main $(objects)