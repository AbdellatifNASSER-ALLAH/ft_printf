DIRTEST := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
DIRSRC := $(CURDIR)
CC = cc
NAME = prog
LIB = ftprintf
DIR = $(DIRTEST)Project
TEST = test.c utils.c

all: $(NAME)
	@$(MAKE) -C $(DIRTEST) run clean --no-print-directory

$(NAME): $(LIB)
	@cd $(DIRTEST) && \
	$(CC) $(TEST) -I./Project -L./Project -l$< -o $@ 2> warning

$(LIB):
	@$(MAKE) clean > /dev/null
	@mkdir -p $(DIR)
	@cp -r $(DIRSRC)/* $(DIR)
	@$(MAKE) -C $(DIR) > /dev/null

run:
	@./$(NAME)

error:
	@echo "show errors or warning..."
	@ls -l $(DIRTEST)/warning | awk '{print $$6, $$7, $$8}'
	@cat $(DIRTEST)/warning

clean:
	@rm -rf $(NAME) $(DIR)

.PHONY: all run clean
