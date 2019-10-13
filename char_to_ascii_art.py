def print_art(char):
    a = ["     ___      ", "    /   \\     ", "   /  ^  \\    ", "  /  /_\\  \\   ", " /  _____  \\  ", "/__/     \\__\\ ", "              "]
    b = [".______   ", "|   _  \\  ", "|  |_)  | ", "|   _  <  ", "|  |_)  | ", "|______/  ", "          "]
    c = ["  ______ ", " /      |", "|  ,----'", "|  |     ", "|  `----.", " \\______|", "         "]
    d = [" _______  ", "|       \\ ", "|  .--.  |", "|  |  |  |", "|  '--'  |", "|_______/ ", "          "]
    e = [" _______ ", "|   ____|", "|  |__   ", "|   __|  ", "|  |____ ", "|_______|", "         "]
    f = [" _______ ", "|   ____|", "|  |__   ", "|   __|  ", "|  |     ", "|__|     ", "         "]
    g = ["  _______ ", " /  _____|", "|  |  __  ", "|  | |_ | ", "|  |__| | ", " \\______| ", "          "]
    h = [" __    __  ", "|  |  |  | ", "|  |__|  | ", "|   __   | ", "|  |  |  | ", "|__|  |__| ", "           "]
    ii = [" __  ", "|  | ", "|  | ", "|  | ", "|  | ", "|__| ", "     "]
    j = ["       __  ", "      |  | ", "      |  | ", ".--.  |  | ", "|  `--'  | ", " \\______/  ", "           "]
    k = [" __  ___ ", "|  |/  / ", "|  '  /  ", "|    <   ", "|  .  \\  ", "|__|\\__\\ ", "         "]
    l = [" __      ", "|  |     ", "|  |     ", "|  |     ", "|  `----.", "|_______|", "         "]
    m = [".___  ___. ", "|   \\/   | ", "|  \\  /  | ", "|  |\\/|  | ", "|  |  |  | ", "|__|  |__| ", "           "]
    n = [".__   __. ", "|  \\ |  | ", "|   \\|  | ", "|  . `  | ", "|  |\\   | ", "|__| \\__| ", "          "]
    o = ["  ______   ", " /  __  \\  ", "|  |  |  | ", "|  |  |  | ", "|  `--'  | ", " \\______/  ", "           "]
    p = [".______   ", "|   _  \\  ","|  |_)  | ", "|   ___/  ", "|  |      ", "| _|      ", "          "]
    q = ["  ______      ", " /  __  \\     ", "|  |  |  |    ", "|  |  |  |    ", "|  `--'  '--. ", " \\_____\\_____\\", "              "]
    r = [".______      ", "|   _  \\     ", "|  |_)  |    ", "|      /     ", "|  |\\  \\----.", "| _| `._____|", "             "]
    s = ["     _______.", "    /       |", "   |   (----`", "    \\   \\    ", ".----)   |   ", "|_______/    ", "             "]
    t = [".___________.", "|           |", "`---|  |----`", "    |  |     ", "    |  |     ", "    |__|     ", "             "]
    u = [" __    __  ", "|  |  |  | ", "|  |  |  | ", "|  |  |  | ", "|  `--'  | ", " \\______/  ", "           "]
    v = ["____    ____ ", "\\   \\  /   / ", " \\   \\/   /  ", "  \\      /   ", "   \\    /    ", "    \\__/     ", "             "]
    w = ["____    __    ____  ", "\\   \\  /  \\  /   /  ", " \\   \\/    \\/   /   ", "  \\            /    ",
         "   \\    /\\    /     ", "    \\__/  \\__/      ", "                   "]
    x = ["___   ___ ", "\\  \\ /  / ", " \\  V  /  ", "  >   <   ", " /  .  \\  ", "/__/ \\__\\ ", "          "]
    y = ["____    ____ ", "\\   \\  /   / ", " \\   \\/   /  ", "  \\_    _/   ", "    |  |     ", "    |__|     ", "             "]
    z = [" ________  ", "|       /  ", "`---/  /   ", "   /  /    ", "  /  /----.", " /________|", "           "]
    comma = ["    ", "    ", "    ", "    ", " __ ", "(_ )", " |/ "]
    zero = ["  ___   ", " / _ \\  ", "| | | | ", "| | | | ", "| |_| | ", " \\___/  ", "        "]
    one = [" __  ", "/_ | ", " | | ", " | | ", " | | ", " |_| ", "     "]
    two = [" ___   ", "|__ \\  ", "   ) | ", "  / /  ", " / /_  ", "|____| ", "       "]
    three = [" ____   ", "|___ \\  ", "  __) | ", " |__ <  ", " ___) | ", "|____/  ", "        "]
    four = [" _  _    ", "| || |   ", "| || |_  ", "|__   _| ", "   | |   ", "   |_|   ", "         "]
    five = [" _____  ", "| ____| ", "| |__   ", "|___ \\  ", " ___) | ", "|____/  ", "        "]
    six = ["   __   ", "  / /   ", " / /_   ", "| '_ \\  ", "| (_) | ", " \\___/  ", "        "]
    seven = [" ______  ", "|____  | ", "    / /  ", "   / /   ", "  / /    ", " /_/     ", "         "]
    eight = ["  ___   ", " / _ \\  ", "| (_) | ", " > _ <  ", "| (_) | ", " \\___/  ", "        "]
    nine = ["  ___   ", " / _ \\  ", "| (_) | ", " \\__, | ", "   / /  ", "  /_/   ", "        "]
    for line in range(7):
        art = ""
        for aloop in range(len(char)):
            if char[aloop] == 'A':
                art += a[line]
            elif char[aloop] == 'B':
                art += b[line]
            elif char[aloop] == 'C':
                art += c[line]
            elif char[aloop] == 'D':
                art += d[line]
            elif char[aloop] == 'E':
                art += e[line]
            elif char[aloop] == 'F':
                art += f[line]
            elif char[aloop] == 'G':
                art += g[line]
            elif char[aloop] == 'H':
                art += h[line]
            elif char[aloop] == 'I':
                art += ii[line]
            elif char[aloop] == 'J':
                art += j[line]
            elif char[aloop] == 'K':
                art += k[line]
            elif char[aloop] == 'L':
                art += l[line]
            elif char[aloop] == 'M':
                art += m[line]
            elif char[aloop] == 'N':
                art += n[line]
            elif char[aloop] == 'O':
                art += o[line]
            elif char[aloop] == 'P':
                art += p[line]
            elif char[aloop] == 'Q':
                art += q[line]
            elif char[aloop] == 'R':
                art += r[line]
            elif char[aloop] == 'S':
                art += s[line]
            elif char[aloop] == 'T':
                art += t[line]
            elif char[aloop] == 'U':
                art += u[line]
            elif char[aloop] == 'V':
                art += v[line]
            elif char[aloop] == 'W':
                art += w[line]
            elif char[aloop] == 'X':
                art += x[line]
            elif char[aloop] == 'Y':
                art += y[line]
            elif char[aloop] == 'Z':
                art += z[line]
            elif char[aloop] == ',':
                art += comma[line]
            elif char[aloop] == '0':
                art += zero[line]
            elif char[aloop] == '1':
                art += one[line]
            elif char[aloop] == '2':
                art += two[line]
            elif char[aloop] == '3':
                art += three[line]
            elif char[aloop] == '4':
                art += four[line]
            elif char[aloop] == '5':
                art += five[line]
            elif char[aloop] == '6':
                art += six[line]
            elif char[aloop] == '7':
                art += seven[line]
            elif char[aloop] == '8':
                art += eight[line]
            elif char[aloop] == '9':
                art += nine[line]

            elif char[aloop] == ' ':
                art += "    "
            else:
                art += "  ???  "
        print(art)


a_string = input("Enter some characters: ").upper()
print_art(a_string)
