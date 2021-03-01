bin_files := $(basename $(notdir $(wildcard *.cpp)))

CFLAGS += -std=c++11

all: ${bin_files}

${bin_files} : % : %.cpp
	g++ $(CFLAGS) -o $@ $^

clean:
	rm -f a.out *.o ${bin_files}
