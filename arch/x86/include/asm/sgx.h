/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_X86_SGX_H
#define _ASM_X86_SGX_H

#include <linux/types.h>

int sgx_set_attribute(u64 *allowed_attributes, unsigned int attribute_fd);

#ifdef CONFIG_INTEL_SGX_VIRTUALIZATION
struct sgx_pageinfo;

int sgx_virt_ecreate(struct sgx_pageinfo *pageinfo, void __user *secs,
		     int *trapnr);
int sgx_virt_einit(void __user *sigstruct, void __user *token,
		   void __user *secs, u64 *lepubkeyhash, int *trapnr);
#endif

#endif /* _ASM_X86_SGX_H */
