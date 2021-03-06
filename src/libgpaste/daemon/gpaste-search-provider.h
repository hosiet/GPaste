/*
 * This file is part of GPaste.
 *
 * Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 */

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_SEARCH_PROVIDER_H__
#define __G_PASTE_SEARCH_PROVIDER_H__

#include <gpaste-bus-object.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_SEARCH_PROVIDER (g_paste_search_provider_get_type ())

G_PASTE_FINAL_TYPE (SearchProvider, search_provider, SEARCH_PROVIDER, GPasteBusObject)

GPasteBusObject *g_paste_search_provider_new (void);

G_END_DECLS

#endif /*__G_PASTE_SEARCH_PROVIDER_H__*/
