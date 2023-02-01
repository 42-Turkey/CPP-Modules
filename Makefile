NAME = .mycpp

RESET	=	\033[0m
BLUE	=	\033[34m
RED		=	\033[31m
UP		=	\033[A
CUT		=	\033[K
IGREEN	=	\033[0;92m
LAST	= \033[0;39m

RM = rm -rf
#https://stackoverflow.com/questions/27030888/for-loop-of-shell-in-makefile
#https://stackoverflow.com/questions/54020765/simple-loop-over-files-in-some-directory-makefile
all: $(NAME)
	@echo "$(NAME) $(IGREEN)Compilation done$(RESET)"

$(NAME): $(build)
	@for i in $$( seq 0 8 ); do \
		for j in $$( seq 0 8 ); do \
				/bin/sh -c "cd 0$$i/ex0$$j && make all" ; \
		done ; \
	done
$(build):
	@if [ !.mycpp ] ; then mkdir -p $(NAME) ; fi
fclean:
	@if [ -d $(NAME) ] ; then \
		$(RM) $(NAME) ; \
		echo "$(RED)$(NAME) deleted!$(RESET)" ; \
	else \
		echo "$(RED)$(NAME) not deleted!$(RESET)" ; \
	fi

.PHONY: all build clean fclean