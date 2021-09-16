/* *********************************************************************** *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *  Copyright (C) 2021 by Silas Natanael Silva De Souza                     *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Silas Natanael Silva De Souza <silassouza21052001@gmail.com>      *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: (81) 98361-9055                                                  *
 * ************************************************************************ *
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[100];
char b[100];
char c[100];
//char v1[100];
//char v2[100];
//char v3[100];

void nomes(char a[], char b[], char c[]);

int main(void)
{ 
   // char a[100];
   // char b[100];
   // char c[100];
   // char v1[100];
   // char v2[100];
   // char v3[100];

   // char nomes(char a, char b, char c);

    nomes(a, b, c);

    //strcpy(v1, a);
    //strcpy(v2, b);
    //strcpy(v3, c);

    //printf("Os nomes digitados foram: %s, %s, %s \n", v1, v2, v3);

    return 0;
}
void nomes(char a[], char b[], char c[])
{
    printf("Digite o primeiro nome: \n");
    fgets(a,100,stdin);
 
    printf("Digite o segundo nome: \n");
    fgets(b,100,stdin);
 
    printf("Digite o terceiro nome: \n");
    fgets(c,100,stdin);

    printf("\nOs nomes digitados foram:\n\n -%s\n -%s\n -%s \n", a, b, c);

}
