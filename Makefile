SRC=$(TARGET).cpp

compile: $(SRC)
	@avr-g++ -mmcu=atmega32 -Os -o $(TARGET).o $(SRC)
	@avr-objcopy -j .text -j .data -O ihex $(TARGET).o  $(TARGET).hex
	@echo "Succes Compiled"
clean:
	@rm $(TARGET).hex $(TARGET).o
	@echo "done"