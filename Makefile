all:
	gcc -o test ./test.c ./ax_printf.c
clean:
	rm ./test
