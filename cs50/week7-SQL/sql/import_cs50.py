# code not working
import cs50
import csv

# create empty shows3.db and closes it
open("shows3.db", "w").close()
# file = open("shows3.db", "w")
# file.close

# open that file for sqlite
db = cs50.SQL("sqlite:///shows3.db")

# create a table named shows in the datbase file named shows3.db
db.execute("CREATE TABLE shows (tconst TEXT, primaryTitle TEXT, startYear NUMERIC, genres TEXT)")

with open("title.basics.tsv", "r") as titles:

    reader = csv.DictReader(titles, delimiter = "\t")

    for row in reader:

        if row["titleType"] == "tvSeries" and row[isAdult] == "0":

            startYear = int(row["startYear"])

            if startYear >= 1970:
                tconst = row["tconst"]
                primaryTitle = row["primaryTitle"]
                genres = row["genres"]

                db.execute("INSERT INTO shows (tconst, primaryTitle, startYear, genres) VALUES(?, ?, ?, ?)", tconst, primaryTitle, startYear, genres)
