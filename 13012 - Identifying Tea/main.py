from sys import stdin


def main():
    n = stdin.readline().strip()

    while n != "":
        total = 0
        for number in stdin.readline().strip().split():
            if number == n:
                total += 1

        print(total)
        n = stdin.readline().strip()


main()
