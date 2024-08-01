#include <stdbool.h>
#include "limine.h"
#include "limine_reqests.h"


__attribute__((used, section(".requests_start_marker")))
static volatile LIMINE_REQUESTS_START_MARKER;

__attribute__((used, section(".requests_end_marker")))
static volatile LIMINE_REQUESTS_END_MARKER;

__attribute__((used, section(".requests")))
static volatile LIMINE_BASE_REVISION(2);


volatile struct limine_framebuffer_request framebuffer_request = {
    .id = LIMINE_FRAMEBUFFER_REQUEST,
    .revision = 0,
};


bool correct_revision() {
    return LIMINE_BASE_REVISION_SUPPORTED;
}
