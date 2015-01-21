/* Licencia GPL
 * 
 *  Provocando errores en la reserva y copia de 2 regiones de memoria.
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
#include <string.h>
#include <stdio.h>
 
void foo (char *bar)
{
   float Mi_Flotante = 10.5; 
   char  c[30];            
   
   printf("Flotante = %f\n", Mi_Flotante);
 
   foo("La cadena Obsenamente enorme !!! XXXXX");
 
   memcpy(c, bar, strlen(bar));  
 
   printf("Flotante = %f\n", Mi_Flotante);
}
 
int main (int argc, char **argv)
{
   foo("La cadena mas grande !!! \x10\x10\xc0\x42");
   return 0;
}
