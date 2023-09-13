#!/usr/bin/python3

from sys import argv
import csv
import re

# function for finding the pattern
def pattern_find(file, pattern):

    index = 0
    pattern_infile = 0
    previouse_index = 0
    index_array = []
    len_index_array = 0
    len_pattern = len(pattern)
    pattern_count = 0
    pattern_count_array = []
    while index < len(file) - 1:
        pattern_infile = file[index:].find(pattern)

        if pattern_infile >= 0:
            if index == 0:
                index_array.append(pattern_infile + index)
            elif (index > 0) and (previouse_index < pattern_infile + index):
                index_array.append(pattern_infile + index)

        previouse_index = pattern_infile + index
        index = index + 1

    # print(f"{pattern} : {index_array}")
    len_index_array = len(index_array)

    if len_index_array == 0:
        return 0
    elif len_index_array == 1:
        return 1
    else:
        for i in range(0, len_index_array - 1):
            if index_array[i + 1] - index_array[i] == len_pattern:
                pattern_count = pattern_count + 1
                pattern_count_array.append(pattern_count)
            else:
                print("", end = '')
                pattern_count = 0
                pattern_count_array.append(pattern_count)


    return max(pattern_count_array) + 1

# main function
if __name__ == "__main__":

    row_pattern = []
    row_1 = []
    file = []
    pattern_nums = []
    dna_dict = {}
    key = ()
    key_pattern = ()

    if len(argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")

    with open(argv[1], newline = '') as csvfile:
        dna = csv.reader(csvfile, delimiter = ',', quotechar='|')
        for row in dna:
            if row[0] == "name":
                # print("name row")
                row_1 = row[1:len(row)]
                # print(row_1)
            else:
                for i in range(1,len(row)):
                    row[i] = int(row[i])
                key = tuple(row[1:len(row)])
                dna_dict[key] = row[0]
                # print("other rows")
            # print(row)
            # print(f"key: {key}")
    # print(f"dna_dict : {dna_dict}")

    f = open(argv[2])
    file = f.read()
    # print(f"file is: {file}")
    for val in row_1:
        pattern_number = pattern_find(file, val)
        pattern_nums.append(pattern_number)

    # print(f"pattern nums: {pattern_nums}")
    key_pattern = tuple(pattern_nums)
    if key_pattern in dna_dict:
        print(dna_dict[key_pattern])
    else:
        print("No match")
    f.close()
