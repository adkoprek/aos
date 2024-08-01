#ifndef LIMINE_REQEUSTS_H
#define LIMINE_REQEUSTS_H

#include <stdbool.h>
#include "limine.h"

__attribute__((section(".requests"))) 
extern volatile struct limine_framebuffer_request framebuffer_request;

bool correct_revision();

#endif // !FRAMEBUFFER_H
