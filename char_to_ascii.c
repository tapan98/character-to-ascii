#include <stdio.h>
#include <conio.h>
#include <string.h>
#define row 5
#define column 15

void character_to_ascii(int line, char *string)
{
	int i;
	char alpha_a[row][column] = 
	{
		{' ',' ',' ',' ','_','_','_',' '},
		{' ',' ',' ','/',' ',' ',' ','|'},
		{' ',' ','/',' ','/','|',' ','|'},
		{' ','/',' ','_','_','_',' ','|'},
		{'/','_','/',' ',' ','|','_','|'}
	},
		alpha_b[row][column] =
	{

		{' ',' ',' ',' ','_','_','_','_',' '},
		{' ',' ',' ','/',' ','_','_',' ',')'},
		{' ',' ','/',' ','_','_',' ',' ','|'},
		{' ','/',' ','/','_','/',' ','/',' '},
		{'/','_','_','_','_','_','/',' ',' '}
	},
		alpha_c[row][column] = 
	{
		{' ',' ',' ','_','_','_','_','_','_'},
		{' ',' ','/',' ','_','_','_','_','/'},
		{' ','/',' ','/',' ',' ',' ',' ',' '},
		{'/',' ','/','_','_','_',' ',' ',' '},
		{'\\','_','_','_','_','/',' ',' ',' '}
	},
		alpha_d[row][column] = 
	{
		{' ',' ',' ',' ','_','_','_','_',' '},
		{' ',' ',' ','/',' ','_','_',' ','\\'},
		{' ',' ','/',' ','/',' ','/',' ','/'},
		{' ','/',' ','/','_','/',' ','/',' '},
		{'/','_','_','_','_','_','/',' ',' '}
	},
		alpha_e[row][column] =
	{
		{' ',' ',' ',' ','_','_','_','_','_','_'},
		{' ',' ',' ','/',' ','_','_','_','_','/'},
		{' ',' ','/',' ','_','_','/',' ',' ',' '},
		{' ','/',' ','/','_','_','_',' ',' ',' '},
		{'/','_','_','_','_','_','/',' ',' ',' '}
	},
		alpha_f[row][column] =
	{
		{' ',' ',' ',' ','_','_','_','_','_','_'},
		{' ',' ',' ','/',' ','_','_','_','_','/'},
		{' ',' ','/',' ','/','_',' ',' ',' ',' '},
		{' ','/',' ','_','_','/',' ',' ',' ',' '},
		{'/','_','/',' ',' ',' ',' ',' ',' ',' '}
	},
		alpha_g[row][column] =
	{
		{' ',' ',' ','_','_','_','_','_','_'},
		{' ',' ','/',' ','_','_','_','_','/'},
		{' ','/',' ','/',' ','_','_',' ',' '},
		{'/',' ','/','_','/',' ','/',' ',' '},
		{'\\','_','_','_','_','/',' ',' ',' '}
	},
		alpha_h[row][column] =
	{
		{' ',' ',' ',' ','_','_',' ',' ','_','_'},
		{' ',' ',' ','/',' ','/',' ','/',' ','/'},
		{' ',' ','/',' ','/','_','/',' ','/',' '},
		{' ','/',' ','_','_',' ',' ','/',' ',' '},
		{'/','_','/',' ','/','_','/',' ',' ',' '}
	},
		alpha_i[row][column] =
	{
		{' ',' ',' ',' ','_','_','_','_'},
		{' ',' ',' ','/',' ',' ','_','/'},
		{' ',' ',' ','/',' ','/',' ',' '},
		{' ','_','/',' ','/',' ',' ',' '},
		{'/','_','_','_','/',' ',' ',' '}
	},
		alpha_j[row][column] =
	{
		{' ',' ',' ',' ',' ',' ',' ','_','_'},
		{' ',' ',' ',' ',' ',' ','/',' ','/'},
		{' ','_','_',' ',' ','/',' ','/',' '},
		{'/',' ','/','_','/',' ','/',' ',' '},
		{'\\','_','_','_','_','/',' ',' ',' '}
	},
		alpha_k[row][column] =
	{
		{' ',' ',' ',' ','_','_',' ','_','_'},
		{' ',' ',' ','/',' ','/','/','_','/'},
		{' ',' ','/',' ',',','<',' ',' ',' '},
		{' ','/',' ','/','|',' ','|',' ',' '},
		{'/','_','/',' ','|','_','|',' ',' '}
	},
		alpha_l[row][column] =
	{
		{' ',' ',' ',' ','_','_',' '},
		{' ',' ',' ','/',' ','/',' '},
		{' ',' ','/',' ','/',' ',' '},
		{' ','/',' ','/','_','_','_'},
		{'/','_','_','_','_','_','/'}
	},
		alpha_m[row][column] =
	{
		{' ',' ',' ',' ','_','_',' ',' ','_','_','_'},
		{' ',' ',' ','/',' ',' ','|','/',' ',' ','/'},
		{' ',' ','/',' ','/','|','_','/',' ','/',' '},
		{' ','/',' ','/',' ',' ','/',' ','/',' ',' '},
		{'/','_','/',' ',' ','/','_','/',' ',' ',' '}
	},
		alpha_n[row][column] =
	{
		{' ',' ',' ',' ','_',' ',' ',' ','_','_'},
		{' ',' ',' ','/',' ','|',' ','/',' ','/'},
		{' ',' ','/',' ',' ','|','/',' ','/',' '},
		{' ','/',' ','/','|',' ',' ','/',' ',' '},
		{'/','_','/',' ','|','_','/',' ',' ',' '}
	},
		alpha_o[row][column] =
	{
		{' ',' ',' ','_','_','_','_',' '},
		{' ',' ','/',' ','_','_',' ','\\'},
		{' ','/',' ','/',' ','/',' ','/'},
		{'/',' ','/','_','/',' ','/',' '},
		{'\\','_','_','_','_','/',' ',' '}
	},
		alpha_p[row][column] =
	{
		{' ',' ',' ',' ','_','_','_','_',' '},
		{' ',' ',' ','/',' ','_','_',' ','\\'},
		{' ',' ','/',' ','/','_','/',' ','/'},
		{' ','/',' ','_','_','_','_','/',' '},
		{'/','_','/',' ',' ',' ',' ',' ',' '}
	},
		alpha_q[row][column] =
	{
		{' ',' ',' ','_','_','_','_',' '},
		{' ',' ','/',' ','_','_',' ','\\'},
		{' ','/',' ','/',' ','/',' ','/'},
		{'/',' ','/','_','/',' ','/',' '},
		{'\\','_','_','_','\\','_','\\',' '}
	},
		alpha_r[row][column] =
	{
		{' ',' ',' ',' ','_','_','_','_',' '},
		{' ',' ',' ','/',' ','_','_',' ','\\'},
		{' ',' ','/',' ','/','_','/',' ','/'},
		{' ','/',' ','_',',',' ','_','/',' '},
		{'/','_','/',' ','|','_','|',' ',' '}
	},
		alpha_s[row][column] =
	{
		{' ',' ',' ','_','_','_','_','_'},
		{' ',' ','/',' ','_','_','_','/'},
		{' ',' ','\\','_','_',' ','\\',' '},
		{' ','_','_','_','/',' ','/',' '},
		{'/','_','_','_','_','/',' ',' '}
	},
		alpha_t[row][column] =
	{
		{' ',' ','_','_','_','_','_','_'},
		{' ','/','_',' ',' ','_','_','/'},
		{' ',' ','/',' ','/',' ',' ',' '},
		{' ','/',' ','/',' ',' ',' ',' '},
		{'/','_','/',' ',' ',' ',' ',' '}
	},
		alpha_u[row][column] =
	{
		{' ',' ',' ','_','_',' ',' ','_','_'},
		{' ',' ','/',' ','/',' ','/',' ','/'},
		{' ','/',' ','/',' ','/',' ','/',' '},
		{'/',' ','/','_','/',' ','/',' ',' '},
		{'\\','_','_','_','_','/',' ',' ',' '}
	},
		alpha_v[row][column] =
	{
		{' ','_',' ',' ',' ',' ','_','_'},
		{'|',' ','|',' ',' ','/',' ','/'},
		{'|',' ','|',' ','/',' ','/',' '},
		{'|',' ','|','/',' ','/',' ',' '},
		{'|','_','_','_','/',' ',' ',' '}
	},
		alpha_w[row][column] =
	{
		{' ','_',' ',' ',' ',' ',' ',' ',' ','_','_'},
		{'|',' ','|',' ',' ',' ',' ',' ','/',' ','/'},
		{'|',' ','|',' ','/','|',' ','/',' ','/',' '},
		{'|',' ','|','/',' ','|','/',' ','/',' ',' '},
		{'|','_','_','/','|','_','_','/',' ',' ',' '}
	},
		alpha_x[row][column] =
	{
		{' ',' ',' ','_',' ',' ','_','_'},
		{' ',' ','|',' ','|','/',' ','/'},
		{' ',' ','|',' ',' ',' ','/',' '},
		{' ','/',' ',' ',' ','|',' ',' '},
		{'/','_','/','|','_','|',' ',' '}
	},
		alpha_y[row][column] =
	{
		{'_','_',' ',' ','_','_'},
		{'\\',' ','\\','/',' ','/'},
		{' ','\\',' ',' ','/',' '},
		{' ','/',' ','/',' ',' '},
		{'/','_','/',' ',' ',' '}
	},
		alpha_z[row][column] =
	{
		{' ','_','_','_','_','_'},
		{'/','_','_',' ',' ','/'},
		{' ',' ','/',' ','/',' '},
		{' ','/',' ','/','_','_'},
		{'/','_','_','_','_','/'}
	};


	for(i = 0; string[i] != NULL; i++){ // terminates if char value is 0
		switch (string[i]) 
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

				case ' ':	printf("      ");
							break;

				default:
							printf("  ???  ");
		}
	}
}

void main()
{
	char string[50] = {NULL};
	int i;
	printf("Enter something: ");
	gets(string);
	for (i = 0; i < row; i++)
	{
		character_to_ascii(i, string);
		printf("\n");
	}

}