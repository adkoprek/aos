#include <stdbool.h>
#include "display.h"
#include "helpers.h"
#include "limine_reqests.h"


void _start(void) {
    if (!correct_revision()) hcf();
    if (!framebuffer_loaded_correctly()) hcf();
    draw_dummy();
    hcf();
}
