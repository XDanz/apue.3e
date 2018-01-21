//
// Created by danter on 2017-07-01.
//
#include <stdarg.h>
#include <stdio.h>
#include <memory.h>

void vout(char *string, char *fmt, ...);
char fmt1 [] = "%s  %s  %s";

int main(void)
{
    char string[100];

    vout(string, fmt1, "Saturday", "Sun", "Mon");
    printf("The string is: '%s' len: %d\n", string, strlen(string));
    int e = 0xFFFFFF73;
    printf("int = %d \n", e);
}

void vout(char *string, char *fmt, ...)
{
    va_list arg_ptr;

    va_start(arg_ptr, fmt);
    int written = vsnprintf(string, 100, fmt, arg_ptr);
    printf("Number of bytes written %d\n", written);
    va_end(arg_ptr);
}
