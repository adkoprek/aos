#include "display.h"
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include "limine_reqests.h"


bool framebuffer_loaded_correctly() {
    if (framebuffer_request.response == NULL || 
        framebuffer_request.response->framebuffer_count < 1) return false;
    return true;
}

void draw_dummy() {
    struct limine_framebuffer *framebuffer = framebuffer_request.response->framebuffers[0];

    for (size_t i = 0; i < 100; i++) {
        volatile uint32_t *fb_ptr = framebuffer->address;
        fb_ptr[i * (framebuffer->pitch / 4) + i] = 0xff0000;
    }
}
