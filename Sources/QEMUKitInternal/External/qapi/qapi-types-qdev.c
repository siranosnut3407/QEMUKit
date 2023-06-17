/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-compat.h"
#include "dealloc-visitor.h"
#include "qapi-types-qdev.h"
#include "qapi-visit-qdev.h"

void qapi_free_q_obj_device_list_properties_arg(q_obj_device_list_properties_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_device_list_properties_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_device_add_arg(q_obj_device_add_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_device_add_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_device_del_arg(q_obj_device_del_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_device_del_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_DEVICE_DELETED_arg(q_obj_DEVICE_DELETED_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DEVICE_DELETED_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_qdev_c;
