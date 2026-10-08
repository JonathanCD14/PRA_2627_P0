XX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 

TARGET = robotic_arm

all: $(TARGET)

$(TARGET): main.o RoboticArm.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o RoboticArm.o

main.o: main.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c RoboticArm.cpp

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)


