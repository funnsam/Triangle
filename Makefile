_SOURCES = ${wildcard src/*.cpp}
SOURCES = ${$(_SOURCES)}

OBJS = ${SOURCES:.cpp=.o}

CXX = g++

CFLAGS = -O2 -Wall -std=c++20 -g

trin: pre-build $(OBJS)
	$(CXX) $(CFLAGS) obj/*.o -o $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o obj/$(notdir $@)

clean:
	rm -rf obj/

	
pre-build: clean
	rm -rf trin
	mkdir obj
