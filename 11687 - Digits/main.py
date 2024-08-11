from sys import stdout

import io, os

read = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def main():
    base = read().decode().strip()

    while base != "END":

        if base == "1":
            print(base)
            base = read().decode().strip()
            continue

        i = 1
        n = len(base)
        while n != 1:
            i += 1
            n = len(str(n))
        stdout.write(str(i + 1) + "\n")
        base = read().decode().strip()


main()
