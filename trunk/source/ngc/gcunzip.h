/****************************************************************************
 * FCE Ultra
 * Nintendo Wii/Gamecube Port
 *
 * Tantric September 2008
 *
 * gcunzip.h
 *
 * Unzip routines
 ****************************************************************************/

#ifndef _GCUNZIP_H_
#define _GCUNZIP_H_

int IsZipFile (char *buffer);
char * GetFirstZipFilename();
int UnZipBuffer (unsigned char *outbuffer, int device);
int SzParse(char * filepath);
int SzExtractFile(int i, unsigned char *buffer);
void SzClose();

#endif
