CC = g++
TARGET = drawings 
SRC = main.cpp Shape.cpp Point.cpp Line.cpp Triangle.cpp Rectangle.cpp Airplane.cpp AirplaneSimple.cpp Matrix.cpp Pisica.cpp
    
#FLAGS = -O3 -qarch=450 -qtune=450
CFLAGS =
FLAGS =
LIBS = -L./ -lengineGlut 
#-lglut -lGL -lGLU -lpthread


OBJ = $(SRC:%.cpp=%.o)

%.cpp.o: 
	$(CC) -c $(CFLAGS) $<  -o $@ 
$(TARGET): $(OBJ)
	$(CC) $(FLAGS)  -o $(TARGET) $(OBJ) $(LIBS)
clean:
	rm *.o $(TARGET) 
