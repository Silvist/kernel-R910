#ifndef _XT_CONNMARK_H_target
#define _XT_CONNMARK_H_target

#include <linux/types.h>

/* Copyright (C) 2002,2004 MARA Systems AB <http://www.marasystems.com>
 * by Henrik Nordstrom <hno@marasystems.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#if defined(CONFIG_S5PV210)
struct xt_connmark_mtinfo1 {
	__u32 mark, mask;
	__u8 invert;
};
#endif
#endif /*_XT_CONNMARK_H_target*/