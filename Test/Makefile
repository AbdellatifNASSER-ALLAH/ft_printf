DIRTEST := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
DIRSRC := $(CURDIR)
CC = cc
CFALGS = -Wall -Wextra -Werror -g
NAME = prog
LIB = ftprintf
DIR = $(DIRTEST)Project
TEST = test.c utils.c


all: $(NAME)
	@$(MAKE) -C $(DIRTEST) run clean --no-print-directory

$(NAME): $(LIB)
	@cd $(DIRTEST) && \
	$(CC) $(CFLAGS) $(TEST) -I./Project -L./Project -l$< -o $@

$(LIB):
	@$(MAKE) clean > /dev/null
	@mkdir -p $(DIR)
	@cp -r $(DIRSRC)/* $(DIR)
	@$(MAKE) -C $(DIR) > /dev/null

run:
	@./$(NAME)

clean:
	@rm -rf $(NAME) $(DIR)

.PHONY: all run clean
