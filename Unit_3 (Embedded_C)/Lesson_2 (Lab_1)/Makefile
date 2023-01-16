CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name=Learn-in-depth
L-S_name=linker_script

all: $(Project_name).bin
	@echo "--------------- BUILD IS DONE ---------------- "

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@


%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T $(L-S_name).ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map


$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin
		@echo "--------------- ALL FILES ARE CLEARED ---------------- "

clean:
	rm 	*.elf *.bin
		@echo "--------------- EXECUTABLE FILES ARE CLEARED ---------------- "

