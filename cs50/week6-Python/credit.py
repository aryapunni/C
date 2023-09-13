#!/usr/bin/python3

def get_number():
    """
    Prompts a user to input a credit card number.
    Converts it into a list of integer digits.

    Input arguments: None
    Output: a list of individual credit card number digits.
    """
    while True:
        num = input("Number: ")
        if num.isdigit():
            break

    # Convert the string into a list of digits
    array = [int(digit) for digit in num]

    return array



def detect_card_type(array):
    """
    Given a list of credit card number digits, finds the card type
    """
    length = len(array)

    card_type = "INVALID"

    if length == 13 or length == 15 or length == 16:
        if (array[0] == 3) and (array[1] == 4 or array[1] == 7):
            card_type = "AMEX"
        elif (array[0] == 5) and (array[1] >= 1 or array[1] <= 5):
            card_type = "MASTERCARD"
        elif array[0] == 4:
            card_type = "VISA"

    return card_type


def check_card_num(array):
    """
    Given a credit card number as a list of digits, check whether it is a valid credit card number.
    """

    array1 = array[-1::-2]
    array2 = array[-2::-2]

    array2 = [2 * x for x in array2]

    total = sum(array1) + sum_digits(array2)

    if total % 10 == 0:
        return True
    return False



def sum_digits(array):
    """
    Given a list of numbers, find the sum of digits of all the numbers.
    """

    s = 0
    for num in array:
        while num > 0:
            s += num % 10
            num //= 10
    return s



if __name__ == "__main__":
    num_list = get_number()
    card_type = detect_card_type(num_list)
    if check_card_num(num_list):
        print(card_type)
    else:
        print("INVALID")
