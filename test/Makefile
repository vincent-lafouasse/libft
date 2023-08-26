all: prep
	gcc -I. main.c -L. -lft

prep:
	make -C ..
	ln -s ../libft.a libft.a
	ln -s ../libft.h libft.h

clean:
	rm libft.a
	rm libft.h
	rm a.out
