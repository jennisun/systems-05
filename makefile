all: pointer.o
	gcc -o pointer pointer.o

pointer.o: pointer.c
	gcc -c pointer.c

clean:
	rm -rf pointer.o pointer

# run:
# 	./pointer
