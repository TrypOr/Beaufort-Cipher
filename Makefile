#Use to compile program and run
all:
	make Beaufort_cipher && make run
#Use to compile	
Beaufort_cipher:
	gcc -Wall -pedantic -o Beaufort_cipher Beaufort_cipher.c
#Use to run executable	
run:
	./Beaufort_cipher
#Use to delete executable	
clean:
	rm Beaufort_cipher