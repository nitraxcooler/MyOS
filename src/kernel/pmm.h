#ifndef PMM_H
#define PMM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define PMM_PAGE_SIZE 4096UL

void pmm_init(void);
void pmm_self_test(void);

uint64_t pmm_alloc_page(void);
void pmm_free_page(uint64_t physical_address);

uint64_t pmm_get_total_memory(void);
uint64_t pmm_get_usable_memory(void);
uint64_t pmm_get_reserved_memory(void);
uint64_t pmm_get_total_pages(void);
uint64_t pmm_get_free_pages(void);
uint64_t pmm_get_used_pages(void);
bool pmm_is_initialized(void);

#endif
