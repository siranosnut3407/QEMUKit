/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EVENTS_BLOCK_EXPORT_H
#define QAPI_EVENTS_BLOCK_EXPORT_H

#include "qapi-events-sockets.h"
#include "qapi-events-block-core.h"
#include "util.h"
#include "qapi-types-block-export.h"

typedef void (*qapi_block_export_deleted_handler)(const char *id, void *ctx);
void qapi_event_dispatch_BLOCK_EXPORT_DELETED(qapi_block_export_deleted_handler handler, CFDictionaryRef data, void *ctx);

#endif /* QAPI_EVENTS_BLOCK_EXPORT_H */
