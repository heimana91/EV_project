CC = gcc 
CFLAGS = -w 
INCLUDES = 
LDFLAGS = 
LIBS = 

TARGET = top_evstation
C_SOURCES =  \
            top_evstationrun.c  \
            top_evstation.c  \
            bfb_off_peak_types.c  \
            bfb_ess_battery.c  \
            bfb_text_print.c  \
            cfb_controller.c  \
            sifb_bfb_inputs.c  \
            print.c  \
            bfb_controller_um.c 
RM = rm -f

.PHONY: all clean cleanall

all: $(TARGET)

$(TARGET): $(C_SOURCES) Makefile
	$(CC) $(CFLAGS) $(INCLUDES) $(C_SOURCES) $(LDFLAGS) $(LIBS) -o $(TARGET)

clean:
	$(RM) *.o

cleanall:
	$(RM) *.o
	$(RM) $(TARGET)
	$(RM) $(TARGET).exe
