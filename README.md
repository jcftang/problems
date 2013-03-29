QUESTION
=========
Write a function that given an input array of integers with 4 entries and a desired 
target_sum, returns the number of combinations, of any length, that add up to that target_sum.

For example:

total_combinations = calculate_combinations([5, 5, 15, 10], target_sum=15)

EXAMPLE 1: ANSWER :  
====================
should return 3, as there are 3 combinations of numbers from the input array that add up to 15, namely:

15
5+10
5+10

and:


QUESTION
==========
total_combinations = calculate_combinations([1, 2, 3, 4], target_sum=6)


EXAMPLE 2 : ANSWER :  
====================
should return 2, as there are 2 combinations of numbers from the input array that add up to 6, namely:

1+2+3
2+4

Write the function and a full set of unit tests.

How would you extend it to deal with a varying length input array?
