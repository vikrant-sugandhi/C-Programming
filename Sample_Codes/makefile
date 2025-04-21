#makefile, makefile-v0p2

CC = gcc
#MODULE_NAME = data_types_and_sizes
#CFLAGS = -Wall -Wextra -Wpedantic -Werror -std=c99 -O2

CFLAGS = -Wall -Wextra -Wpedantic -Werror -std=c99 -O0 -g -fsanitize=address,undefined
TARGET = default
OUTPUT = $(TARGET)
SOURCE = $(TARGET).c

$(OUTPUT):
#	$(CC) $(CFLAGS) -o $(OUTPUT) -c $(SOURCE)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SOURCE)
clean:
	cp -u -r ./ ../make_clean_backup
	rm -f *.o $(OUTPUT)
#-------------------------------------------
# Flag | Why in Embedded?
# -Wall | Catch basic bugs and risky code
# -Wextra | Catch more potential problems
# -Wpedantic | Enforce strict ISO C standard compliance
# -Werror | Force you to clean up all warnings
# -std=c99 | Safe modern features, unless restricted by toolchain
# -O2 | Balance between speed and code size

