#!/usr/bin/python3

line = input("input line: ")
letter = 0
word = 0
sentance = 0
index = 0
S = 0
L = 0
# print(line)
for alpha in line:
    if alpha.isalpha():
        # print(alpha)
        letter = letter + 1
    elif alpha == ' ':
        # print(f"a space : {alpha}")
        word = word + 1
    elif alpha == '.' or alpha == '?' or alpha == '!':
        # print("end of a line")
        sentance = sentance + 1

total_words = word + 1
# print(letter, total_words, sentance)
L = (letter * 100)/total_words
S = (sentance * 100)/total_words
# print(L, S)
index = (0.0588 * L) - (0.296 * S) - 15.8
index = round(index)
if index < 1:
    print("Before Grade 1")
elif index > 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")
