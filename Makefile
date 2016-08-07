# Makefile pour le projet juste_prix
# Auteur : Green Apple Crew  / mercredi 20 mai 2015, 15:19:20 (UTC+0200)
# Ce document est sous Licence GPL v2
# voir : http://www.gnu.org/licenses/gpl-2.0.html

BUILD_DIR = build
SOURCE_DIR = sources
APPLICATION_NAME = juste_prix
BINARY_NAME = ${BUILD_DIR}/${APPLICATION_NAME}
CC = gcc
INCLUDE_DIR = inc

# Commenter cette ligne si vous etes n'etes pas sous Mac OS X
OS_FLAGS = -DMACOSX

LD_FLAGS = -lm

GCC_SECURITY_FLAGS = -fstack-protector -pie -fPIE -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security

CFLAGS = -I${INCLUDE_DIR} -Wall -ansi -pedantic -std=c99 ${OS_FLAGS} ${GCC_SECURITY_FLAGS}
CFLAGS_DEBUG = -g -DDEBUG


OBJS = ${SOURCE_DIR}/*.c

all: ${BINARY_NAME} ${BINARY_NAME}_debug

${BINARY_NAME}: ${OBJS}
	${CC} ${CFLAGS} -o $@ $^ ${LD_FLAGS}

${BINARY_NAME}_debug: ${OBJS}
	${CC} ${CFLAGS} ${CFLAGS_DEBUG} -o $@ $^ ${LDFLAGS}

clean:
	${RM} *.o ${BINARY_NAME} ${BINARY_NAME}_debug
	${RM} -rf ${BINARY_NAME}_debug.dSYM

