CC = g++
TARGET = libengineGlut.so 
SRC = GlutDrawing.cpp \
      GlutData.cpp \
      EngineGlut.cpp 

CFLAGS =-c -fPIC -D LINUX_PLATFORM
FLAGS =-Wall -shared -fPIC
LIBS = -lglut -lGL -lGLU -lpthread
OBJ = $(SRC:.cpp=.o)

	
.cpp.o: 
	$(CC) $(CFLAGS) $< -o $@ 
$(TARGET): $(OBJ)
	$(CC) $(FLAGS)  -o $(TARGET) $(OBJ) $(LIBS)
clean:
	rm *.o $(TARGET) 
