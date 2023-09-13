# TODO
#!/usr/bin/python3

from sys import argv
import csv
import sqlite3

# main function
if __name__ == "__main__":

    # usage checking
    if len(argv) != 2:
        print("Usage: python roster.py House_name")
        exit()
    # take the command line input (house name) from user and assign it to the variable house
    house = argv[1]

    # establishing connection with database
    conn = sqlite3.connect('students.db')

    # One useful feature of the sqlite3 module is the built-in sqlite3.Row class designed to be used as a row factory.
    # Rows wrapped with this class can be accessed both by index (like tuples) and case-insensitively by name
    # conn.row_factory = sqlite3.Row

    c = conn.cursor()

    c.execute("SELECT first,middle,last,birth FROM students WHERE students.house = ? ORDER BY students.last ASC, students.first", (house, ))

    # fetching the data output from sqlite
    students = c.fetchall()

    # Error in family name will return an empty students list
    if not students:
        print("Error: Wrong family name")
        exit()

    # Iterating through the fetched data to print them out
    for row in students:

        if row[1] == None:
            # if the middle name is none
            print(f"{row[0]} {row[2]}, born {row[3]}")
            
        else:
            # If there is a middle name
            print(f"{row[0]} {row[1]} {row[2]}, born {row[3]}")



    # Save (commit) the changes
    conn.commit()

    # We can also close the connection if we are done with it.
    # Just be sure any changes have been committed or they will be lost.
    conn.close()
