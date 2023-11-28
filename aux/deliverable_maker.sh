#! /usr/bin/env bash

DIR_NAME=rendu
SRC_DIR=./src

rm -rf "${DIR_NAME}"
mkdir "${DIR_NAME}"

MANDATORY_C_FILES__=
BONUS_C_FILES__=

for c_file in $(find "${SRC_DIR}" -name '*.c' | grep -v lst); do
	MANDATORY_C_FILES__+=" $(basename "${c_file}")"
	cp "${c_file}" "${DIR_NAME}"
done

for c_file in $(find "${SRC_DIR}" -name '*.c' | grep lst); do
	BONUS_C_FILES__+=" $(basename "${c_file}")"
	cp "${c_file}" "${DIR_NAME}"
done

LIB='./libft.h'
cp "${LIB}" "${DIR_NAME}"

TEMPLATE_MAKEFILE='./aux/Makefile'
TARGET_MAKEFILE="${DIR_NAME}/Makefile"

export MANDATORY_C_FILES__ BONUS_C_FILES__
envsubst <"${TEMPLATE_MAKEFILE}" >"${TARGET_MAKEFILE}"
