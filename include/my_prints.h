/* Copyright (C) 2016-2018 University of California, Irvine
 * 
 * Authors:
 * Zhihao Yao <z.yao@uci.edu>
 * Zongheng Ma <zonghenm@uci.edu>
 * Yingtong Liu <yingtong@uci.edu>
 * Ardalan Amiri Sani <arrdalan@gmail.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MY_PRINTS_H_
#define _MY_PRINTS_H_

#include <sys/stat.h>
#include <stdio.h>
#include <sys/time.h>

#define PRINT0(fmt, args...) /* fprintf(stderr, "isol-user: %s: " fmt, __func__, ##args); */
#define PRINT1(fmt, args...) /* fprintf(stderr, "isol-user: %s: " fmt, __func__, ##args); */
#define PRINT_ERR(fmt, args...) fprintf(stderr, "isol-user: %s: " fmt, __func__, ##args);

#define PRINT2(fmt, args...) /* fprintf(stderr, "isol-user: %s: " fmt, __func__, ##args); */
#define PRINT3(fmt, args...) /* fprintf(stderr, "isol-user: %s: " fmt, __func__, ##args); */

#define INTEL_GPU_DEV_FILE_NAME		"/dev/dri/card0"

#endif /* _MY_PRINTS_H_ */
