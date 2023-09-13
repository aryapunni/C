from cs50 import get_int

while True:
    step = get_int("Height: ")
    if step < 9 and step > 0:
        break

for i in range(1, step + 1):
    print(' ' * (step - i) + '#' * i + '  ' + '#' * i)
    # for j in range(0, step - i):
    #     print(" ", end = '')

    # for k in range(0, i):
    #     print("#", end = '')

    # print("  ", end = '')

    # for l in range(0, i):
    #     print("#", end = '')

    # print()


    # for j in range(0, step - i):
    #     print(" ", end = '')

    # for k in range(0, i):
    #     print("#", end = '')

    # print("  ", end = '')

    # for l in range(0, i):
    #     print("#", end = '')

    # print()
