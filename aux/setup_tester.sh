#! /usr/bin/env bash

DIR_NAME=rendu
SRC_DIR=./src

setup_tripouille() {
	git clone git@github.com:Tripouille/libftTester.git "${DIR_NAME}/tripouille"
}

################################################################################

setup_tripouille
