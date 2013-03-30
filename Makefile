default: exercise naive

test: exercise naive
	@./test.sh

%.o: %.c
	$(CC) -c -o $@ -g

clean:
	rm exercise
