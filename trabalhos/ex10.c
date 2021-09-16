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

int main(void)
{
    char n[1000];
    int i, tamanho;
    int soma = 0;
    int soma2 = 0;
    int resultado;

    printf("Digite uma quantidade qualquer de '(' e ')': \n");
    setbuf(stdin, 0);
    fgets(n,1000,stdin);
    n[strlen(n)-1] = '\0';

    tamanho = strlen(n);

    for(i=0; i<tamanho; i++)
    {
        if(n[i] == '(')
        {
            soma = soma + 1;
        }
        if(n[i] == ')')
        {
            soma2 = soma2 - 1;
        }
    }

    resultado = soma + soma2;

    printf("\nResultado = %d\n\n", resultado);
   // printf("\nO conteudo do vetor é: %s\n", n);
    
    return 0;
}

