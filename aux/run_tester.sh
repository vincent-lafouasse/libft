#! /usr/bin/env bash

DIR_NAME=rendu
SRC_DIR=./src

run_tripouille() {
	make -C "${DIR_NAME}/tripouille"
}

################################################################################

run_tripouille
