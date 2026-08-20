#ifndef PANIC_H
#define PANIC_H

#include <stdint.h>

#include "boot/limine.h"

extern volatile uint64_t limine_base_revision[3];
extern volatile struct limine_framebuffer_request framebuffer_request;

void kernel_panic(const char *reason);
void kernel_panic_exception(const char *reason, uint8_t vector, const char *name,
                           uint64_t error_code, uint64_t rip, uint64_t cs,
                           uint64_t rflags, uint64_t rsp, uint64_t ss);
void kernel_panic_page_fault(const char *reason, uint8_t vector, const char *name,
                           uint64_t error_code, uint64_t fault_address,
                           uint64_t rip, uint64_t cs, uint64_t rflags,
                           uint64_t rsp, uint64_t ss);

#endif
