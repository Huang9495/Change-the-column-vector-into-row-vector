.SUFFIXES: .cpp .o .c

CC = g++ -g

SRCS = test2.cpp 

OBJS = $(SRCS:.cpp=.o)

OUTPUT = test

CFLAGS = -std=c++11 -I/opencv_route/include

LIBS = -L/opencv_route3/lib \
	-lopencv_core \
	-lopencv_highgui \
	-lopencv_imgproc \
	-lopencv_imgcodecs \
	-lopencv_objdetect \
	-lopencv_ml\
	-lopencv_imgcodecs\
	 `pkg-config opencv --libs`

all: $(OBJS)
	$(CC) -o $(OUTPUT) $(OBJS) $(LIBS)
	@echo "---------- OK ----------"

.cpp.o:
	$(CC) -Wall $(CFLAGS) -c $< -o $@ 

clean:
	-rm -f $(OBJS)
	-rm -f core*	
