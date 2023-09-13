# structured query language
import csv

counts = {}
# counts = dict() another way of initialising dictionary
with open("sql-python.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        # print row["title"]
        title = row["title"]

        if title in counts:
            counts[title] += 1
        else:
            counts[title] = 1
    print(counts)
for title, count in sorted(counts.items(), key = lambda item: item[1], reverse = True):
    print(title, count, sep=" | ")
