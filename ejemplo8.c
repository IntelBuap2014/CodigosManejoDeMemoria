/* Licencia GPL
 * Ejemplo8.c
 * 
 *  Reservando 2 regiones de Memoria con malloc y regresamos contenido
 *  de otro lugar del stack.
 *
 * Copyright <Fecha> Desarrollador <Correo<at>mail.com>
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
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (void) {
	char *buf1 = (char *) malloc(10);
	char *buf2 = (char *) malloc(10);

	memset(buf2, "A", 10);
	memset(buf1, "B", 17);
	printf("Cadena: %s\n",buf2);
	return 0;
}
