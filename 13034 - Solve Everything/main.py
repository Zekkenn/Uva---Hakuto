from sys import stdin

def main():
    cases = int(stdin.readline())
    for i in range(cases):

        solved = True; p = 0
        problems = stdin.readline().split()
        while solved and p < len(problems):
            solved = solved and not int(problems[p]) == 0
            p += 1
        if solved:
            print(f"Set #{i+1}: Yes")
        else:
            print(f"Set #{i+1}: No")

main()
