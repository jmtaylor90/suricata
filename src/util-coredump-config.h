/* Copyright (C) 2007-2010 Open Information Security Foundation

 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Eileen Donlon <emdonlo@gmail.com>
 */

#ifndef SURICATA_COREDUMP_CONFIG_H
#define SURICATA_COREDUMP_CONFIG_H

#include "suricata-common.h"

int32_t CoredumpLoadConfig(void);
void CoredumpEnable(void);

void CoredumpConfigRegisterTests(void);

#endif /* SURICATA_COREDUMP_CONFIG_H */
