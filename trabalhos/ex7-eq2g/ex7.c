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
#include<math.h>

int main(void)
{
    int a, b, c;
    int delta;
    float resposta;
    float resposta2;

    printf("\nDigite o primeiro termo (A): \n");
    scanf("%d", &a);
    printf("\nDigite o segundo termo (B): \n");
    scanf("%d", &b);
    printf("\nDigite o terceiro termo (C): \n");
    scanf("%d", &c);

    printf("\nA equação é: %dX^2 + %dX + %d\n" , a, b, c);

    if(a == 0)
    {
        printf("\nNão é possivel resolver a equação\n"); 
    }

    delta = sqrt(pow(b,2) - 4*a*c);

    printf("\nDelta = %d\n", delta);

    if(delta<0)
    {
        printf("\nNão é possivel resolver a equação\n");
    }

    resposta = (float) (-b + delta)/(2*a);

    resposta2= (float) (-b - delta)/(2*a);

    printf("\nAs respostas são:  X1 = %f e X2 = %f\n", resposta, resposta2);

    return 0;
}
