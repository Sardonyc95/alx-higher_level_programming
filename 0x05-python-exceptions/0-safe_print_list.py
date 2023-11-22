#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    x_elements = 0
    for i in range(x):
        try:
            print(f"{my_list[i]}", end="")
            x_elements += 1
        except IndexError:
            break
    print()
    return(x_elements)
