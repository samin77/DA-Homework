/*
 * In The Name Of God
 * ========================================
 * [] File Name : diset.h
 *
 * [] Creation Date : 10-03-2015
 *
 * [] Last Modified : Tue 10 Mar 2015 12:47:35 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#ifndef DISET_H
#define DISET_H

struct diset {
	int *U;
	int number;
};

struct diset *diset_new(int number);
int diset_find(struct diset *d, int i);
int diset_merge(struct diset *d, int i, int j);
void diset_delete(struct diset *d);

#endif
