#include <lv2/memory.h>

/*
below is a list of ids and their associated names. reversed by chcniz 8/14/2023

object name     ID
===========     ==
in_kern_test     0
ppc_segments     1
memobj           2
map_entry        3
console          4
processas        5
process          6
in_process       7
program_segment  8
loader           9
sputhread       10 0x0A
puthread        11 0x0B
puscheduler     12 0x0C
debugger        13 0x0D
page            14 0x0E
rsv_region      15 0x0F
shmtbl          16 0x10
boot            17 0x11
stack           18 0x12
intr            19 0x13
bepm            20 0x14
mem_id_entry    21 0x15
kern_prof       22 0x16
id_table        23 0x17
event           24 0x18
pseudo_fs       25 0x19
kgdb            26 0x1A
timer           27 0x1B
bus driver      28 0x1C
iosys config    29 0x1D
network driver  30 0x1E
storage driver  31 0x1F
usb driver      32 0x20
ios infra       33 0x21
hid             34 0x22
bluetooth       35 0x23
usbbtaudio      36 0x24
deci3           37 0x25
tsma            38 0x26
fs vfs          39 0x27 <= malloc
fs pseudofs     40 0x28
fs netfs        41 0x29
fs fat          42 0x2A
fs udf          43 0x2B
fs iso9660      44 0x2C
fs ufs          45 0x2D
fs drfs         46 0x2E
fs lsp i/f      47 0x2F <= palloc
fs hostfs       48 0x30
virtual uart    49 0x31
rsx audio       50 0x32
security        51 0x33
sys management  52 0x34
prx             53 0x35 <== kalloc
sync            54 0x36
ovlm            55 0x37
address db      56 0x38
memory db       57 0x39
paging          58 0x3A
MAT             59 0x3B
*/

void *malloc(size_t size)
{
	return alloc(size, 0x27);
}

void free(void *ptr)
{
	dealloc(ptr, 0x27);
}

void *kalloc(size_t size)
{
	return alloc(size, 0x35);
}

void kfree(void *ptr)
{
	dealloc(ptr, 0x35);
}

void *palloc(size_t size)
{
	return alloc(size, 0x2F);
}

void pfree(void *ptr)
{
	dealloc(ptr, 0x2F);
}
