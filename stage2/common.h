#ifndef __COMMON_H__
#define __COMMON_H__

#undef  printf

#ifdef DEBUG

#include <debug.h>
#include <debug_util.h>
#include <lv2/patch.h>
#undef  printf
#define printf			_debug_printf
#define DPRINTF			_debug_printf
#define DPRINT_HEX		debug_print_hex
#define DPRINT_HEX_C	debug_print_hex_c
/*
static INLINE void dump_stack_trace(unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address(i);
		DPRINTF("%p\n", p);

		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}
*/
static INLINE void dump_stack_trace2(unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	void *p = get_patched_func_call_address();
	DPRINTF("%p\n", p);

	for (int i = 0; p && (i < n); i++)
	{
		p = get_call_address(i);
		DPRINTF("%p\n", p);
	}

	DPRINTF("---------------------------\n");
}

static INLINE void *get_call_address2(u64 *stack, unsigned int idx)
{
	stack = (u64 *)stack[0];

	for (int i = 0; i < idx; i++)
	{
		if (!stack)
			return 0;

		stack = (u64 *)stack[0];
	}

	if (!stack)
		return 0;

	return (void *)(stack[2]-4);
}

static INLINE void dump_stack_trace3(u64 *stack, unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address2(stack, i);
		DPRINTF("%p\n", p);

		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}
/*
static INLINE void dump_stack_trace4(u64 *stack, unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	DPRINTF("%p\n", (void *)(stack[2] - 4));
	n--;

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address2(stack, i);
		DPRINTF("%p\n", p);
		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}
*/
#else

#define fatal(s) { while(1); }
#define printf(...)
#define DPRINTF(...)
#define DPRINT_HEX(b, s)
#define DPRINT_HEX_C(b, s)
#define dump_stack_trace(n)
#define dump_stack_trace2(n)

#endif

#endif /* __COMMON_H__ */

