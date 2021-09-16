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
    float a, b, c;

    printf("\nDigite a medida do lado do triangulo: ");
    scanf("%f", &a);

    printf("\nDigite a medida do lado do triangulo: ");
    scanf("%f", &b);

    printf("\nDigite a medida do lado do triangulo: ");
    scanf("%f", &c);

    if((a+b>c)||(b+c>a)||(a+c>b) && (a!=0) || (b!=0) || (c!=0))
    {
         if((pow(a,2)+pow(b,2)==pow(c,2)))
    {
        printf("\nÉ um triangulo retangulo\n");
    }
    else if((pow(a,2)<pow(c,2)+pow(b,2)))
    {
        printf("\nÉ um triangulo acutangulo\n");
    }
    else if((pow(a,2)>pow(c,2)+pow(b,2)))
    {
        printf("\nÉ um triangulo obtusangulo\n");
    }

    }
    else
    {
        printf("\nNão é um triangulo\n");
    }
 
    return 0;
}
