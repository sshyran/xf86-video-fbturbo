/*
 * Copyright © 2014 Cosmin Gorgovan <cosmin [at] linux-geek [dot] org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#define XV_IMAGE_MAX_WIDTH  2048
#define XV_IMAGE_MAX_HEIGHT 2048

#ifndef RK_XVIDEO_H
#define RK_XVIDEO_H

#include "interfaces.h"
#include "rk_fb.h"

typedef struct {
	int src_y_off;
	int src_u_off;
	int src_v_off;
	int src_stride;
	int src_w;
	int src_h;
	int src_x;
	int src_y;
	
	Bool enabled;
	
	int prev_drw_x;
	int prev_drw_y;
	int prev_drw_w;
	int prev_drw_h;
	
	Bool src_updated;
	
	xvideo_i intf;
	
	rk_fb *rkfb;
} rk_xvideo;

rk_xvideo *rk_xvideo_init(rk_fb *rkfb);

#endif

