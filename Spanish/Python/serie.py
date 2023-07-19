def serie(m):
    if m < 0 or m == 0:
        raise ValueError("Error")

    s = 0
    s1 = 0

    if m == 1:
        s1 = 1
    if m == 2:
        s1 = 3
    if m > 2:
        s = serie(m-2) - serie(m-1)
        s1 = s/2
    return s1

def main(): 
    m = int(input("Da el número: "))
    print(serie(m))

if __name__ == "__main__":
    main()
