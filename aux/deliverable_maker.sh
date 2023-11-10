#! /usr/bin/env bash


DIR_NAME='rendu'
SRC_DIR='./src'

rm -rf "${DIR_NAME}"
mkdir "${DIR_NAME}"

MANDATORY_C_FILES=
BONUS_C_FILES=

for c_file in $(find "${SRC_DIR}" -name '*.c' | grep -v bonus); do
	MANDATORY_C_FILES="${MANDATORY_C_FILES} ${c_file}"
	cp "${c_file}" "${DIR_NAME}"
done

for c_file in $(find "${SRC_DIR}" -name '*.c' | grep  bonus); do
	BONUS_C_FILES="${BONUS_C_FILES} ${c_file}"
	cp "${c_file}" "${DIR_NAME}"
done

LIB='./include/libft.h'
cp "${LIB}" "${DIR_NAME}"
