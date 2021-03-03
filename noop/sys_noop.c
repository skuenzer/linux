#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(noop)
{
        return (long) 0x0C0FFEE;
}
