default: bubble

bubble: bubble.o
	gcc bubble.o -o bubble
  
bubble.o: bubble.c
	gcc -c bubble.c -o bubble.o

clean:
	rm -f bubble.o
	rm -f bubble
