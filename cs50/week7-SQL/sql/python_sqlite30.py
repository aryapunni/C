import csv
import sqlite3

conn = sqlite3.connect('shows.db')

c = conn.cursor()


# Create table
c.execute('''CREATE TABLE shows1 (id INT, title TEXT, year NUMERIC, PRIMARY KEY(id))''')
c.execute('''CREATE TABLE genres (show_id INT, genre TEXT, FOREIGN KEY(show_id) REFERENCES shows1(id))''')

with open("title.basics.tsv", "r") as titles:

    reader = csv.DictReader(titles, delimiter = "\t")

    for row in reader:

        if row["titleType"] == "tvSeries" and row["isAdult"] == "0":

            if row["startYear"] != "\\N":

                year = int(row["startYear"])

                if year >= 1970:
                    id = int(row["tconst"][2:])
                    title = row["primaryTitle"]
                    # Insert a row of data
                    c.execute("INSERT INTO shows1 (id, title, year) VALUES(?, ?, ?)", (id, title, year))

                    if row["genres"] != "\\N":

                        for genre in row["genres"].split(","):
                            c.execute("INSERT INTO genres (show_id, genre) VALUES(?, ?)", (id, genre))

# Save (commit) the changes
conn.commit()

# We can also close the connection if we are done with it.
# Just be sure any changes have been committed or they will be lost.
conn.close()
