all: exercise

test: exercise
	@./test.sh

%.o: %.c
	$(CC) -c -o $@

clean:
	rm exercise
