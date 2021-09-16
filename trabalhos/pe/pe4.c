/**************************************************************************
*   pe4.c                                    Version 20190817.235856      *
*                                                                         *
*   Project Euler                                                         *
*   Copyright (C) 2015-2019   Template by Ruben Carlo Benante             *
*   Author: Your name here                                                *
***************************************************************************
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 3 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************
*   To contact the author, please write to:                               *
*   Ruben Carlo Benante                                                   *
*   Email: rcb@beco.cc                                                    *
*   Webpage: http://www.beco.cc                                           *
*   Phone: +55 (81) 3184-7555                                             *
**************************************************************************/

/* ---------------------------------------------------------------------- */
/* includes */
#include "projecteuler.h"
#include "myeulerlib.h"

/* ---------------------------------------------------------------------- */
/* defines */
/* Project Euler Exercise Number */
/* #define PEN pe ## 4 */
#define SPEN "pe" "4"

/* ---------------------------------------------------------------------- */
/* prototypes */
void pe4(void); /* Proj. Euler problem #4 */

/* ---------------------------------------------------------------------- */
/* main function */
/* Do not change the main function. Use the void pe4(void) and
 * others you create here or in the myeulerlib.c and myeulerlib.h files
 */
int main(void)
{
    printf("Project Euler 20190817.233439, %s\n", SPEN);
    help(); /* optional help message at start */
    GRABsignals(); /* grab interruption signals */
    pe4(); /* Proj. Euler problem #4 */
    LEGOsignals(); /* restore interruption signals */
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* Proj. Euler problem #4 */
/* Problem description:
 *
 */

void pe4(void)
{

    int numero1;
    int numero2;
    int multiplicacao;
    int maiorpalindromo = 0;
    int variaveltemporaria;
    int digitos = 0;
    int inverso = 0;
    int cifra, maiortermo1 = 0, maiortermo2 = 0;


    for(numero1 = 999; numero1 >= 100; numero1--)
    {
        for(numero2 = numero1; numero2 >= 100; numero2--)
        {
            multiplicacao = numero1 * numero2;

            if(multiplicacao > maiorpalindromo)
            {
                variaveltemporaria = multiplicacao;

                while(variaveltemporaria != 0)
                {

                    digitos++;
                    variaveltemporaria /= 10;

                }

                variaveltemporaria = multiplicacao;
                inverso = 0;
                while(variaveltemporaria != 0)
                {

                    cifra = variaveltemporaria % 10;
                    inverso = inverso + cifra * pow(10, digitos - 1);
                    digitos--;
                    variaveltemporaria /= 10;



                }

                if(multiplicacao == inverso)
                {

                    maiorpalindromo = inverso;
                    maiortermo1 = numero1;
                    maiortermo2 = numero2;

                }

            }

        }


    }
    printf("\n\nO maior palindromo é a mutiplicação de %d x %d = %d \n\n", maiortermo1, maiortermo2, maiorpalindromo);


    /* local variables */
    ulong r = 0; /* answer */

    /* Put this command inside a loop to get previews when pressing CTRL-C */
    /* ctrlc_printf("%s: Trying now %u\n", __FUNCTION__, r); */

    /* Use to count minutes running: */
    /* if(minutes() >= 2) break; */

    printf("%s: %lu\n", __FUNCTION__, r); /* answer */
    return;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

