output:  power.o major1.o reverse.o replace.o
	gcc  power.o major1.o reverse.o replace.o -o output 

major1.o: major1.c major1.h
	gcc -c major1.c

power.o: power.c
	gcc -c power.c

reverse.o: reverse.c
	gcc -c reverse.c

replace.o: replace.c
	gcc -c replace.c

clean: 
	rm *.o 