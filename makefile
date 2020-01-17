all:
	gcc -o slow slow.c

install:
	mv slow /usr/local/bin/
	chmod +x /usr/local/bin/slow
