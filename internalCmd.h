/*
 * internalCmd.h
 *
 *  Created on: Nov 13, 2016
 *      Author: root
 */

#ifndef INTERNALCMD_H_
#define INTERNALCMD_H_

//use this global variable to store the the pathnames
extern char* paths;

void cd(char *path);
void pathShow();
void pathAdd(char *path);
void pathRemove(char *path);

#endif /* INTERNALCMD_H_ */
