src = $(wildcard *.cc)
target = $(patsubst 1.%.cc,%.out,$(src))
CC = g++
CCFLAGS = -std=c++11 -Wall -Wextra -Werror -I./include

%.out: 1.%.cc
	$(CC) -o $@ $^ $(CCFLAGS)

clean:
	rm -rf *.out

all: $(target)
	@for file in $(shell ls ./*.out); do echo $${file} && $${file}; done

.PHONY: all clean
