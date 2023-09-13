# TODO
#!/usr/bin/python3

from sys import argv
import csv
import sqlite3

# main function
if __name__ == "__main__":

    # usage checking
    if len(argv) != 2:
        print("Usage: python import.py characters.csv")
        exit()

    # establishing connection with database
    conn = sqlite3.connect('students.db')

    c = conn.cursor()

    # Create table named students (Already exists in the problem)
    # c.execute('''CREATE TABLE students (id INTEGER PRIMARY KEY AUTOINCREMENT, first VARCHAR(255),
    # middle VARCHAR(255), last VARCHAR(255), house VARCHAR(10), birth INTEGER)''')

    # reading csv file for processing
    with open(argv[1], "r") as students:

        reader = csv.DictReader(students, delimiter = ",")
        for row in reader:
            # counting sapces to split into first, middle and last name
            num_spaces = row['name'].count(' ')

            # splitting the name based on space to get first, middle and last name
            name_split = row['name'].split(" ")

            # assigning splitted names to variables first, middle and last
            if num_spaces == 1:
                # one space indicates no middle name, so assign middle name to null
                # assign first and last names based on the splitted name array
                first = name_split[0]
                middle = None
                last = name_split[1]
            elif num_spaces == 2:
                # two space indicates first, middle and last names exists
                # assign first, middle and last names based on the splitted name array
                first = name_split[0]
                middle = name_split[1]
                last = name_split[2]

            # extract house name and assign it to variable house
            house = row['house']

            # extract birth, make it an integer and assign it to variable birth
            birth = int(row['birth'])

            # Insert these data into the database
            c.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)", (first, middle, last, house, birth))

    # Save (commit) the changes
    conn.commit()

    # We can also close the connection if we are done with it.
    # Just be sure any changes have been committed or they will be lost.
    conn.close()
