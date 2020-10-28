#!/usr/bin/env bash
E_BADARGS=64
if [[ $# -eq 1 ]]
then
	echo reading from list file $1
	totn=$(for num in $(cat "$1"); do echo -n "$num "; done; ); ./readdynamic $totn
else
	echo "read and process from a list of integers"
	echo "usage: $0 infilename.txt"
	exit $E_BADARGS
fi
