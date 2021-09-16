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
#10 chaves gcc mais importantes

#1.Como ver a chave publica para outros sites

* $ cat home/usuario/.ssh/id_rsa.pub

#2. Criar chaves SSH no Linux

* $ ssh -keygen -t rsa

#3. Usada para autenticação no github sem senha

* ssh -keygenb -t rsa -C "email@example.com"

#4. Para ativar sua identidade

* ssh -add

#5. Configuração do cliente ssh

* shh ~/.config/git/config

#6. Arquivo de chave privada

* ~/.ssh/id_rsa

#7. Arquivo de chave publica

* $ ~/.ssh/id_rsa.pub

#8. Comando para compilar de forma mais simples

* $ gcc nomedoarquivo.c

#9. Comando para compilar de forma mais completa

* $ gcc -Wall nome do arquivo.c

#10. Comando para executar o arquivo

* $ ./nomedoarquivo.c
