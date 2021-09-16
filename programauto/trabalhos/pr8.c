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
#include<time.h>

int main(void)
{
    int matriz[3][3];
    int i, a, b, c, d, e, f, g, h, k, j, determinante;
    int *p0 = &matriz[0][0];
    int *p1 = &matriz[0][1];
    int *p2 = &matriz[0][2];
    int *p3 = &matriz[1][0];
    int *p4 = &matriz[1][1];
    int *p5 = &matriz[1][2];
    int *p6 = &matriz[2][0];
    int *p7 = &matriz[2][1];
    int *p8 = &matriz[2][2];

    srand(time(NULL));

    for(i = 0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            matriz[i][j]=rand() %10;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

     a=*p0;
     b=*p1;
     c=*p2;
     d=*p3;
     e=*p4;
     f=*p5;
     g=*p6;
     h=*p7;
     k=*p8;
   
  /*printf("\n%i ", *p0);
    printf("%i ", *p1);
    printf("%i \n", *p2);
    printf("%i ", *p3);
    printf("%i ", *p4);
    printf("%i \n", *p5);
    printf("%i ", *p6);
    printf("%i ", *p7);
    printf("%i \n\n", *p8);*/

    determinante = (c*e*g)+(a*f*h)+(b*d*k)+(a*e*k)+(b*f*g)+(c*d*h);

    printf("\nDeterminante = %i\n\n", determinante);

    return 0;
}
