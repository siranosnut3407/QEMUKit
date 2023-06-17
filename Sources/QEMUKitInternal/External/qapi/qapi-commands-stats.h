/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 * Copyright (c) 2019 osy
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_STATS_H
#define QAPI_COMMANDS_STATS_H

#include "qapi-types-stats.h"

StatsResultList *qmp_query_stats(StatsFilter *arg, Error **errp, void *ctx);
StatsSchemaList *qmp_query_stats_schemas(bool has_provider, StatsProvider provider, Error **errp, void *ctx);

#endif /* QAPI_COMMANDS_STATS_H */
