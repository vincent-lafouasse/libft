#! /usr/bin/env bash

DIR_NAME='rendu'
SRC_DIR='./src'

mkdir "${DIR_NAME}"

for c_file in $(find "${SRC_DIR}" -name '*.c'); do
	cp "${c_file}" "${DIR_NAME}"
done
