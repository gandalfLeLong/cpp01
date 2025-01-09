NAME	= Harl

#----------SOURCES-----------#

SRC_DIR	= sources/
OBJ_DIR	= obj/
INC_DIR	= includes/

HEADER	= ${INC_DIR}Harl.hpp \
	  
INCLUDE = -I ${INC_DIR}

SRC	=	main.cpp \
		Harl.cpp \

OBJ	= ${addprefix ${OBJ_DIR}, ${SRC:.cpp=.o}}

#----------COMPILATION----------#

CC	= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

#----------RULES----------#

${OBJ_DIR}%.o:	${SRC_DIR}%.cpp
		@mkdir -p ${OBJ_DIR}
		${CC} ${CFLAGS} ${INCLUDE} -o $@ -c $<

${NAME}:	${OBJ} ${HEADER}
		${CC} ${CFLAGS} ${OBJ} ${INCLUDE} -o ${NAME}

all:		${NAME}

clean:
		@${RM} ${OBJ_DIR}

fclean:		clean
		@${RM} ${NAME}
		
re:		fclean all

.PHONY:		all clean fclean re
