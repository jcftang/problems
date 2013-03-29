#!/bin/sh

#NUM 1 sum
#NUM 2-5 are the inputs

./exercise 15 5 5 10 15 > output.out
diff -u expected.out output.out
