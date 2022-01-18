
all: compile test


compile: test.c
		@echo "compile..."
		gcc test.c

test: a.out
		@echo "testing..."
		./a.out

clean:
		@echo "cleaning"
		rm a.out

