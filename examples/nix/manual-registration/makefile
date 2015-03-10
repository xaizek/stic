CC = gcc
FILES = example_project.c test_fixture_one.c test_fixture_two.c ../../../src/stic.c
OUT_EXE = example

build: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) -I ../../../src

clean:
	rm -f *.o core

rebuild: clean build
