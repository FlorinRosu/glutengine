CC = g++
TARGET = drawings 
SRC = main.cpp 
    
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
