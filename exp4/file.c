//
// Created by littleherozzzx on 02/12/2022.
//

#include "file.h"
void create_fcb(fcb *fcb, char *filename, unsigned char attribute, size_t length)
{
    strcpy(fcb->filename, filename);
    fcb->attribute = attribute;
    fcb->length = length;
    time_t t = time(NULL);
    fcb->create_time = *localtime(&t);
    fcb->last_modify_time = *localtime(&t);
}

void my_fwrite(char *buf, size_t size, user_open *_user_open, char *mode)
{
    // ToDo
}


void my_cd(char* dir)
{
    // ToDo
}