//varadic function

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *Concat(int count, ...)
{
    va_list ap;
    size_t  len = 0;

    if (count < 1)
        return NULL;

    // First, measure the total length required
    va_start(ap, count);
    int i;
    for (i=0; i < count; i++) {
        const char *s = va_arg(ap, char *);
        len += strlen(s);
    }
    va_end(ap);

    // Allocate return buffer.
    char *ret = (char *)malloc(len + 1);
    if (NULL == ret){
        return NULL;
    }
        

    // Concatenate all the strings into the return buffer.
    char *dst = ret;
    va_start(ap, count);
    for (i=0; i < count; i++) {
        const char *src = va_arg(ap, char *);

        // This loop is a strcpy.
        while (*dst++ = *src++);
        dst--;
    }
    va_end(ap);
    return ret;
}
void main(void) {
    char *concatenated = Concat(5, "Hello", ", ", "My name", " is, ", "Deepak.");
    puts(concatenated);
    free(concatenated);
    return;
}
