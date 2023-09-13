#!/usr/bin/python3

import sys
import csv

# function for finding the pattern
def pattern_find(sequence, pat):
    """
    Finds the maximum number of times that pattern `pat' appears in `sequence'
    Inputs:
     sequence: a string representing the DNA sequence of an unknown person.
     pat: the pattern we have to search for
    Returns:
     the largest number of times that the `pat' appears in `sequence'
    """

    pat_len = len(pat)
    idx = 0
    count = 0
    max_count = 0

    while True:
        next_idx = sequence.find(pat, idx)

        if next_idx == idx:
            # The pattern repeats at idx
            count += 1
            idx += pat_len

        elif next_idx == -1:
            if count > max_count:
                max_count = count
            break

        else:
            if count > max_count:
                max_count = count

            count = 1
            idx = next_idx + pat_len

    return max_count

# main function
if __name__ == "__main__":

    dna_dict = {}

    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    with open(sys.argv[1]) as csvfile:
        dna_list = csv.reader(csvfile, delimiter = ',')
        header = next(dna_list)[1:]

        for row in dna_list:
            dna_key = tuple(int(x) for x in row[1:])
            dna_dict[dna_key] = row[0]

    with open(sys.argv[2]) as sequence_file:
        sequence = sequence_file.read()

    pattern_key = tuple(pattern_find(sequence, val) for val in header)

    if pattern_key in dna_dict:
        print(dna_dict[pattern_key])
    else:
        print("No match")
