/* Licencia GPL
 * Ejemplo7.c
 * 
 *  Provocando error por paso un de argumentos demasiado grande.
 *
 * Copyright <2015> Adrian <adrian<at>aztli.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <stdio.h>

void manipulador(char *buffer) {
  char nuevobuffer[30];
  strcpy(nuevobuffer,buffer);
}

int main() {
  char buffer[4096];
  int contador=0;

  while ((buffer[contador++] = getchar()) != '\n') {};

  contador=1;
  manipulador(buffer);
  contador=2;
  printf("El valor es : %d\n",contador);
  return 0;
}
