all : break bit

%: %.c
	gcc -o $@ $^
