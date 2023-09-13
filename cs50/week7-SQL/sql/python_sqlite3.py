import csv
import sqlite3

conn = sqlite3.connect('shows.db')

c = conn.cursor()


# Create table
c.execute('''CREATE TABLE shows1 (tconst TEXT, primaryTitle TEXT, startYear NUMERIC, genres TEXT)''')

with open("title.basics.tsv", "r") as titles:

    reader = csv.DictReader(titles, delimiter = "\t")

    for row in reader:

        if row["titleType"] == "tvSeries" and row["isAdult"] == "0":

            if row["startYear"] != "\\N":

                startYear = int(row["startYear"])

                if startYear >= 1970:
                    tconst = row["tconst"]
                    primaryTitle = row["primaryTitle"]
                    genres = row["genres"]
                    # Insert a row of data
                    c.execute("INSERT INTO shows1 (tconst, primaryTitle, startYear, genres) VALUES(?, ?, ?, ?)", (tconst, primaryTitle, startYear, genres))

# Save (commit) the changes
conn.commit()

# We can also close the connection if we are done with it.
# Just be sure any changes have been committed or they will be lost.
conn.close()
