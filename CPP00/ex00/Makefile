CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = megaphone

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
