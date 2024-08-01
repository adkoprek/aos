#include "helpers.h"


void hcf() {
    asm ("cli");
    for (;;) {
        asm ("hlt");
    }
}
