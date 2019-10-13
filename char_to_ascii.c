#include <stdio.h>
#define row 6
#define column 12

void character_to_ascii( char* string)
{
	int line, char_pos;
	for(line = 0; line< row; line++)
	{
		char alpha_a[row][column] = //storing art
		{
			{"    ___ "},{"   /   |"},{"  / /| |"},{" / ___ |"},{"/_/  |_|"},{"        "}
		},
			alpha_b[row][column] =
		{
			{"    ____ "},{"   / __ )"},{"  / __  |"},{" / /_/ / "},{"/_____/  "},{"         "}
		},
			alpha_c[row][column] =
		{
			{"   ______"},{"  / ____/"},{" / /     "},{"/ /___   "},{"\\____/   "},{"         "}
		},
			alpha_d[row][column] =
		{
			{"    ____ "},{"   / __ \\"},{"  / / / /"},{" / /_/ / "},{"/_____/  "},{"         "}
		},
			alpha_e[row][column] =
		{
			{"    ______"},{"   / ____/"},{"  / __/   "},{" / /___   "},{"/_____/   "},{"          "}
		},
			alpha_f[row][column] =
		{
			{"    ______"},{"   / ____/"},{"  / /_    "},{" / __/    "},{"/_/       "},{"          "}
		},
			alpha_g[row][column] =
		{
			{"   ______"},{"  / ____/"},{" / / __  "},{"/ /_/ /  "},{"\\____/   "},{"         "}
		},
			alpha_h[row][column] =
		{
			{"    __  __"},{"   / / / /"},{"  / /_/ / "},{" / __  /  "},{"/_/ /_/   "},{"          "}
		},
			alpha_i[row][column] =
		{
			{"    ____"},{"   /  _/"},{"   / /  "},{" _/ /   "},{"/___/   "},{"        "}
		},
			alpha_j[row][column] =
		{
			{"       __"},{"      / /"},{" __  / / "},{"/ /_/ /  "},{"\\____/   "},{"         "}
		},
			alpha_k[row][column] =
		{
			{"    __ __"},{"   / //_/"},{"  / ,<   "},{" / /| |  "},{"/_/ |_|  "},{"         "}
		},
			alpha_l[row][column] =
		{
			{"    __ "},{"   / / "},{"  / /  "},{" / /___"},{"/_____/"},{"       "}
		},
			alpha_m[row][column] =
		{
			{"    __  ___"},{"   /  |/  /"},{"  / /|_/ / "},{" / /  / /  "},{"/_/  /_/   "},{"           "}
		},
			alpha_n[row][column] =
		{
			{"    _   __"},{"   / | / /"},{"  /  |/ / "},{" / /|  /  "},{"/_/ |_/   "},{"          "}
		},
			alpha_o[row][column] =
		{
			{"   ____ "},{"  / __ \\"},{" / / / /"},{"/ /_/ / "},{"\\____/  "},{"        "}
		},
			alpha_p[row][column] =
		{
			{"    ____ "},{"   / __ \\"},{"  / /_/ /"},{" / ____/ "},{"/_/      "},{"         "}
		},
			alpha_q[row][column] =
		{
			{"   ____ "},{"  / __ \\"},{" / / / /"},{"/ /_/ / "},{"\\___\\_\\ "},{"        "}
		},
			alpha_r[row][column] =
		{
			{"    ____ "},{"   / __ \\"},{"  / /_/ /"},{" / _, _/ "},{"/_/ |_|  "},{"         "}
		},
			alpha_s[row][column] =
		{
			{"   _____"},{"  / ___/"},{"  \\__ \\ "},{" ___/ / "},{"/____/  "},{"        "}
		},
			alpha_t[row][column] =
		{
			{"  ______"},{" /_  __/"},{"  / /   "},{" / /    "},{"/_/     "},{"        "}
		},
			alpha_u[row][column] =
		{
			{"   __  __"},{"  / / / /"},{" / / / / "},{"/ /_/ /  "},{"\\____/   "},{"         "}
		},
			alpha_v[row][column] =
		{
			{" _    __"},{"| |  / /"},{"| | / / "},{"| |/ /  "},{"|___/   "},{"        "}
		},
			alpha_w[row][column] =
		{
			{" _       __"},{"| |     / /"},{"| | /| / / "},{"| |/ |/ /  "},{"|__/|__/   "},{"           "}
		},
			alpha_x[row][column] =
		{
			{"   _  __"},{"  | |/ /"},{"  |   / "},{" /   |  "},{"/_/|_|  "},{"        "}
		},
			alpha_y[row][column] =
		{
			{"__  __"},{"\\ \\/ /"},{" \\  / "},{" / /  "},{"/_/   "},{"      "}
		},
			alpha_z[row][column] =
		{
			{" _____"},{"/__  /"},{"  / / "},{" / /__"},{"/____/"},{"      "}
		},
			alpha_apos[row][column] =
		{
			{"  _ "},{" ( )"},{" |/ "},{"    "},{"    "},{"    "}
		},
			alpha_colon[row][column] =
		{
			{"     "},{"   _ "},{"  (_)"},{" _   "},{"(_)  "},{"     "}
		},
			alpha_one[row][column] =
		{
			{"   ___"},{"  <  /"},{"  / / "},{" / /  "},{"/_/   "},{"      "}
		},
			alpha_two[row][column] =
		{
			{"   ___ "},{"  |__ \\"},{"  __/ /"},{" / __/ "},{"/____/ "},{"       "}
		},
			alpha_three[row][column] =
		{
			{"   _____"},{"  |__  /"},{"   /_ < "},{" ___/ / "},{"/____/  "},{"        "}
		},
			alpha_four[row][column] =
		{
			{"   __ __"},{"  / // /"},{" / // /_"},{"/__  __/"},{"  /_/   "},{"        "}
		},
			alpha_five[row][column] =
		{
			{"    ______"},{"   / ____/"},{"  /___ \\  "},{" ____/ /  "},{"/_____/   "},{"          "}
		},
			alpha_six[row][column] =
		{
			{"   _____"},{"  / ___/"},{" / __ \\ "},{"/ /_/ / "},{"\\____/  "},{"        "}
		},
			alpha_seven[row][column] =
		{
			{" _____"},{"/__  /"},{"  / / "},{" / /  "},{"/_/   "},{"      "}
		},
			alpha_eight[row][column] =
		{
			{"   ____ "},{"  ( __ )"},{" / __  |"},{"/ /_/ / "},{"\\____/  "},{"        "}
		},
			alpha_nine[row][column] =
		{
			{"   ____ "},{"  / __ \\"},{" / /_/ /"},{" \\__, / "},{"/____/  "},{"        "}
		},
			alpha_zero[row][column] =
		{
			{ "   ___ " },{ "  / _ \\"},{" / // /"},{"/ // / "},{"\\___/  "},{"        "}
		},
			alpha_comma[row][column] =
		{
			{"   "},{"   "},{"   "},{" _ "},{"( )"},{"|/ "}
		}
		;


		for (char_pos = 0; string[char_pos] != NULL; char_pos++) // terminates if char value is NULL/0
		{
			switch (string[char_pos])
			{
			case 'a':
			case 'A':	printf(alpha_a[line]);
				break;
			case 'b':
			case 'B':	printf(alpha_b[line]);
				break;
			case 'c':
			case 'C':	printf(alpha_c[line]);
				break;
			case 'd':
			case 'D':	printf(alpha_d[line]);
				break;
			case 'e':
			case 'E':	printf(alpha_e[line]);
				break;
			case 'f':
			case 'F':	printf(alpha_f[line]);
				break;
			case 'g':
			case 'G':	printf(alpha_g[line]);
				break;
			case 'h':
			case 'H':	printf(alpha_h[line]);
				break;
			case 'i':
			case 'I':	printf(alpha_i[line]);
				break;
			case 'j':
			case 'J':	printf(alpha_j[line]);
				break;
			case 'k':
			case 'K':	printf(alpha_k[line]);
				break;
			case 'l':
			case 'L':	printf(alpha_l[line]);
				break;
			case 'm':
			case 'M':	printf(alpha_m[line]);
				break;
			case 'n':
			case 'N':	printf(alpha_n[line]);
				break;
			case 'o':
			case 'O':	printf(alpha_o[line]);
				break;
			case 'p':
			case 'P':	printf(alpha_p[line]);
				break;
			case 'q':
			case 'Q':	printf(alpha_q[line]);
				break;
			case 'r':
			case 'R':	printf(alpha_r[line]);
				break;
			case 's':
			case 'S':	printf(alpha_s[line]);
				break;
			case 't':
			case 'T':	printf(alpha_t[line]);
				break;
			case 'u':
			case 'U':	printf(alpha_u[line]);
				break;
			case 'v':
			case 'V':	printf(alpha_v[line]);
				break;
			case 'w':
			case 'W':	printf(alpha_w[line]);
				break;
			case 'x':
			case 'X':	printf(alpha_x[line]);
				break;
			case 'y':
			case 'Y':	printf(alpha_y[line]);
				break;
			case 'z':
			case 'Z':	printf(alpha_z[line]);
				break;
			case '\'':	printf(alpha_apos[line]);
				break;
			case ':':	printf(alpha_colon[line]);
				break;
			case ',':	printf(alpha_comma[line]);
				break;
			case '1':	printf(alpha_one[line]);
				break;
			case '2':	printf(alpha_two[line]);
				break;
			case '3':	printf(alpha_three[line]);
				break;
			case '4':	printf(alpha_four[line]);
				break;
			case '5':	printf(alpha_five[line]);
				break;
			case '6':	printf(alpha_six[line]);
				break;
			case '7':	printf(alpha_seven[line]);
				break;
			case '8':	printf(alpha_eight[line]);
				break;
			case '9':	printf(alpha_nine[line]);
				break;
			case '0':	printf(alpha_zero[line]);
				break;

			case ' ':	printf("      ");
				break;

			default:
				printf("  ???  ");
			}
		}
		printf("\n");
	}
}

int main()
{
	char string[50] = { NULL };
	printf("Enter something: ");
	scanf("%[^\n]s", string);// [] is scanset specifier

	character_to_ascii(string);
	
	return 0;
}