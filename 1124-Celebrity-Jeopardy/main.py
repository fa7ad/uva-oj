while True:
    try:
        s = input()
        if s is '':
            break
        print(s)
    except EOFError:
        break
