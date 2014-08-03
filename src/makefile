CC    = C:\gbdk\bin\lcc -Wa-l -Wl-m

BINS    = C:\Users\Pico\Documents\GitHub\Gameboy-Game\src\new.gb

all:    $(BINS)

%.o:    %.c
	$(CC) -c -o $@ $<

%.s:    %.c
	$(CC) -S -o $@ $<

%.o:    %.s
	$(CC) -c -o $@ $<

%.gb:    %.o
	$(CC) -o $@ $<

clean:
	rm -f *.o *.lst *.map *.gb

# Link file, and write 0x80 at position 0x143 in header
new.gb:    new.o
	$(CC) -Wl-yp0x143=0x80 -o new.gb new.o