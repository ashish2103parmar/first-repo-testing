SRCS  := $(wildcard *.c)
TARGET := CALC
CFLAG := -I Include/
all : ${TARGET} 

${TARGET}:${SRCS}
	gcc  $^ ${CFLAG}  -o $@ 

clean:
		rm ${TARGET}
