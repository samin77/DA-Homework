/*
 * In The Name Of God
 * ========================================
 * [] File Name : tsp.h
 *
 * [] Creation Date : 16-03-2015
 *
 * [] Last Modified : Mon 16 Mar 2015 07:57:43 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#ifndef TSP_H
#define TSP_H

void travel(int n, int **const W, int *minlength);
void travel_fprint(FILE *stream);

#endif
