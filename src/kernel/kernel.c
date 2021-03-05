#include "tty.h"

#if defined(__linux__)
#error "Not using a cross compiler"
#endif

#if !defined(__x86_64__)
#error "The kernel needs to be compiled with an x86_64-elf compiler"
#endif


void kernel_main(){
    clear_screen();
    set_color(VGA_WHITE, VGA_GREEN);
    print_line("OK!");
}
